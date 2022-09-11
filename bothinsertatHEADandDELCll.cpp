#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node( int val)
    {
        data=val;
        next=NULL;
    }
};
void insertathead(node* &head , int val)
{
    node* newnode=new node(val);
    node* h=head;
    newnode->next=head;
    while(h!=NULL && h->next!=head)
    {
        h=h->next;

    }
    h->next=newnode;
    head=newnode;
    
}
void insertattail(node* &head , int val)
{
    node* nn=new node(val);
    if(head==NULL)
    {
        head=nn;
        return;
    }
    node* temp=head;
    while(temp->next!=head && temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=nn;
    nn->next=head;

}
void display(node* newnode)
{
    node* temp=newnode;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=newnode);
    
    cout<<endl<<temp->data;
    
}
void deletehead(node* head)
{
    if(head==NULL)
    return;


}
int main()
{
    // jb bhi hum insert krege  , last wala node point krega head pr hmesha 
    node* newnode=new node(1);
    insertattail(newnode  , 2);
    insertattail(newnode , 3);
    display(newnode);
    cout<<endl;
    insertathead(newnode , 2);
    display(newnode);
}