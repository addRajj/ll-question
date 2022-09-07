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
void addhead(node* &head, int val)
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
void addtail(node* &head, int val)
{
    node* newnode=new node(val);
    if(head==NULL)
    {
        addhead(head, val);
        return ;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
/*void append(node* &head, int val)
{
    node* temp=head;
    int count=1;
    while(count!)
}*/
int  countnow(node* &head)
{
    int count=0;
    node* temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
node* append(node* &head, int val)// append function
{
    int count=1;
    node* temp=head;
    node* temp1=head;
    node* newnode;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    while(count<val)
    {
        temp=temp->next;
        count++;
    }
    newnode=temp->next;
    temp->next=NULL;
    temp1->next=head;
    return newnode;
}
void mergeit(node* &head, node* &head1 , node* &newhead)
{
    node* temp=head;
    node* temp1=head1;
    while(temp->next!=NULL || temp1->next!=NULL)
    {
        if(temp->data<temp1->data)
        {
            addtail(newhead, temp->data);
            temp=temp->next;
        }
        else
        {
            addtail(newhead , temp1->data);
            temp1=temp1->next;
        }   
    }
    while(temp->next!=NULL)
    {
        addtail(newhead , temp->data);
        temp=temp->next;
    }
    while(temp1->next!=NULL)
    {
        addtail(newhead , temp1->data);
        temp1=temp1->next;        
    }
   
}
node* even(node* &head ,node* &newhead1)
{
    int count=1;
    node* temp=head;
    while(temp!=NULL)
    {
        if(count%2==0)
        {
            addtail(newhead1 , temp->data);
        }
        count++;
    }
    return newhead1;
    
}
node* odd(node* &head, node* &newhead2)
{
    int count=1;
    node* temp=head;
    while(temp!=NULL)
    {
        if(count%2==1)
        {
            addtail(newhead2 , temp->data);
        }
        count++;
    }
    return newhead2;
}
node* mergethem(node* &head1, node* &head2)
{
    node* temp1=head1;
    node* temp2=head2;
    while(temp1->next=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=head2;
    return head1;
}
int main()
{
    node* head=NULL;
    addtail(head, 2);
    addtail(head, 3);
    addtail(head, 5);
    addtail(head, 7);
    addtail(head, 9);
    addtail(head, 10);
    //cout<<"the first linked list is"<<endl;
    cout<<"befor:"<<endl;
    print(head);
    cout<<"after"<<endl;
    //print(head);
    //int count=countnow(head);
    //cout<<endl;
    /*cout<<count<<endl;
    cout<<"enter the no. of nodes you want to append from the end to the starting"<<endl;
    int d;
    cin>>d;
    int f=count-d;
    node*newnode=append(head,f);//to append the last k node in the starting of the linked list
    print(newnode);
    return 0;*/
    /*node* head1=NULL;
    addtail(head1, 1);
    addtail(head1, 4);
    addtail(head1, 5);
    addtail(head1, 6);
    cout<<endl;
    //cout<<"the second linked list is"<<endl;
    print(head1);
    cout<<endl;*/
    //cout<<"after merging the linked list is:"<<endl;
    //node* newhead=NULL;
    //mergeit(head , head1 , newhead);
    //print(newhead);
    node* newhead1=NULL;
    node* newhead2=NULL;
    node* newhead=even(head , newhead1);
    node* newheadi=odd(head , newhead2);
    node* n=mergethem(newhead , newheadi);
    print(n);
return 0;

}