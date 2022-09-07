#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node* prev;
    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertathead(node* &head, int val)
{
    node* newnode=new node(val);
    
   
    newnode->next=head;
    if(head!=NULL)
    {
        head->prev=newnode;
    }
    head=newnode;
}
void insertattail(node* &head, int val)
{
    if(head==NULL)
    {
        insertathead(head , val);
        return ;
    }
    node* newnode=new node(val);
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
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
node* reverse(node* head)
{
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    return temp;
}
void newdisplay(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->prev;
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
    cout<<endl;
    node* temp=reverse(head);
    newdisplay(temp);
}