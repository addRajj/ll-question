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
void insertattail(node* head , int val)
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
    // bs head ko show kr rha hu, jisse ptta chle head point ho rha hai
    cout<<endl<<temp->data;
    
}
int main()
{
    // jb bhi hum insert krege  , last wala node point krega head pr hmesha 
    node* newnode=new node(1);
    insertattail(newnode  , 2);
    insertattail(newnode , 3);
    display(newnode);
}