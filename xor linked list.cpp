#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<inttypes.h>
using namespace std;

class Node
{public:
    int data;
    Node* pxn;
};
Node* XOR(Node*a,Node*b)
{
    return (Node*)((uintptr_t)a^(uintptr_t)b);

}
void insert(int a,Node** headref)
{Node* temp= new Node();
temp->data=a;
temp->pxn=XOR(*headref,NULL);
if(*headref!=NULL)
{Node* next=XOR((*headref)->pxn,NULL);
    (*headref)->pxn=XOR(temp,next);

}
    (*headref)=temp;

}

void printlist(Node* headref)
{
    Node* curr=headref;
    Node* prev=NULL;
    Node* next;

    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        next=XOR(curr->pxn,prev);
        prev=curr;
        curr=next;
    }

}




int main()
{Node* head=NULL;int k;int n;Node* current;
    cout<<"This program will create a XOR linked list-\n";
    cout<<"type the number of nodes in the list";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"type the "<<i<<"th node data";
        cin>>k;
        insert(k,&head);
        if(i==0){current=head;}

    }
cout<<"the XOR linked list in Forward Direction-\n";
printlist(current);
cout<<"\nthe linked list in Backward Direction-\n";
printlist(head);

return(0);
}
