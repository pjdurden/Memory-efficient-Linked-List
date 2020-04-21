#include<iostream.h>
#include<conio.h>
using namespace std;

class Node
{
    int data;
    Node* pxn;
};
Node* XOR(Node*a,Node*b)
{
    return a^b;

}
void insert(int a,Node** headref)
{Node* temp= new Node();
temp->data=data;
temp->pxn=XOR(*headref,NULL);
while(*headref!=NULL)
{Node* next=XOR(*headref->pxn,NULL);
    (*headref)->pxn=XOR(temp,next);

}
    (*headref)=temp;
}

void printlist(Node* headref)
{
    Node* curr=head;
    Node* prev=NULL;
    cout<<"the linked list is-"
    while(*curr!=NULL)
    {
        cout<<curr->data;
        prev=curr;
        next=XOR(prev,curr->pxn);
        curr=next;
    }

}

int main()
{Node* head=NULL;int k;
    cout<<"This program will create a XOR linked list-";
    cout<<"type the number of nodes in the list";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"type the "<<i<<"th node data";
        cin>>k;
        insert(k,&head);

    }
printlist(head);
return(0);
}
