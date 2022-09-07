#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertathead(node* head, int val)
{
    node* newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    newnode->next=head;
    head=newnode;
}
void insertattail(node* head , int val)
{
    if(head==NULL)
    {
        insertathead(head, val);
    }
    node* newnode=new node(val);
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}
int main()
{
    node* head=NULL;
    insertattail(head, 1);
     insertattail(head, 2);
      insertattail(head, 3);
       insertattail(head, 4);
       display(head);
}