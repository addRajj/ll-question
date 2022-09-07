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
        return ;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
    head=newnode;
}
void insertattail(node* &head, int val)
{
    if(head==NULL)
    {
        insertathead(head, val);
        return ;
    }
    node* newnode=new node(val);
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

/*void splitit(node* &head, node**head1, node**head2)
{
    node* slow=head;
    node* fast=head;
    if(head==NULL)
    {
        return;
    }
    while(fast->next!=head && fast->next->next!=head)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    if(fast->next->next == head)
        fast= fast->next;
         */
    /* Set the head pointer of first half */
    /**head1 = head;
         
    /* Set the head pointer of second half */
    //if(head->next != head)
    //    *head2 = slow->next;
         
    /* Make second half circular */
    //fast->next = slow->next;
         
    /* Make first half circular */
    //slow->next = head;
node* deleteathead(node* &head, int val)
{
    node* todelete=head;
    node* temp=head;
    while(temp!=head)
    {
            temp=temp->next;
    }
    temp->next=head->next;
    delete todelete;
    node* newhead=temp->next;
    return newhead;
}
node* deleteat(node* head, int val)
{
    node* temp=head;
    if(head->data==val)
    {
        deleteathead(head, val);
    }
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
    return head;
    
}
int main()
{
    node* head=NULL;
    node* head1=NULL;
    node* head2=NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    insertattail(head, 5);
    display(head);
   // splitit(head, &head1, &head2);
   deleteat(head, 3);
   cout<<endl;
   display(head);
   cout<<endl;
   node* newnode=deleteat(head, 1);
   display(newnode);
}