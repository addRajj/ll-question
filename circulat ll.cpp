#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
};
void push(node**head  , int val)
{
    node* newnode=new node();
    newnode->data=val;
    newnode->next=*head;
    node* temp=*head;
    if(*head!=NULL)
    {
        while(temp->next!=*head)
        {
            temp=temp->next;
        }
        temp->next=newnode;

    }
    else
    {
        newnode->next=newnode;
    }
}
void print(node *head)
{
    node* temp=head;
    do
    {
        cout<<temp->data;
        temp=temp->next;
    } while (temp!=head);
    
}
int main()
{
    node* head=NULL;
    push(&head , 1);
    push(&head , 2);
    push(&head, 3);
    push(&head , 4);
    print(head);
}