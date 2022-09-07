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
void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
node* deleteat(node* &head , int val) // to delete at a particular node

{
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelte=temp->next;
    temp->next=temp->next->next;
    delete todelte;
    return head;
}
node* deleteathead(node* &head)// to delete at head
{
    node* temp=head;
    head=head->next;
    delete temp;
}
node* deleteatpos(node* head , int val)// to delete at a particular index
{
    node* temp=head;
    int count=0;
    while(count!=(val-1))
    {
        temp=temp->next;
    }
    node* todelete= temp->next;
    temp->next=temp->next->next;
    delete todelete;
    return head;
}
int main()
{
    node* newnode1= new node(1);
    node* newnode2=new node(2);
    newnode1->next=newnode2;
    node* newnode3=new node(3);
    newnode2->next=newnode3;
    node* newnode4=new node(5);
    newnode3->next=newnode4;
    print(newnode1);
    deleteat(newnode1, 3);//to delete a particular node
    cout<<endl;
    node* newnode5=new node(6);
    newnode4->next=newnode5;
    deleteathead(newnode1);// delete at head
    print(newnode1);
    cout<<endl;
    deleteatpos(newnode1 , 1);// to delete at a particular index
    print(newnode1);
}