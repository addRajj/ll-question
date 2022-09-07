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
void insertathead(node* &head, int val)
{
    node* newnode=new node(val);
    if(head==NULL)
    {
        newnode->next=newnode;
        head=newnode;
        return;
    }
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
    head=newnode;

}
void insertattail(node* &head , int val)
{
    node* newnode=new node(val);
    if(head==NULL)
    {
        insertathead(head , val);
        return ;
    }
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
}
void display(node* head)
{
    node* temp=head;
    do
    {
        /* code */
        cout<<temp->data;
        temp=temp->next;
    } while (temp!=head);
    
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
    insertathead(head, 5);
    display(head);

return 0;

}