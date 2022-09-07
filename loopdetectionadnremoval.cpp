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
void insertinto(node* &head, int val)
{
    node* newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
int prtint(node* head)
{
    int ans=head->data;
    node* temp=head;
    int count=0;
    for(int i=0;i<4;i++)
    {
        if(temp->data==ans)
        count++;
        temp=temp->next;
    }
    return count;
}
void createloop(node* head)
{
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head;
}
bool looppresent(node* head)
{
    node* slow=head;
    node* fast=head;
    while(slow && fast && fast->next)
    {
      
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        return true;
    }
    return false;
}
int l=0;
void removeloop(node* &head)
{
    node* slow=head;
    node* fast=head;
    while(fast&& slow && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            fast=head;
            while(fast->next!=slow->next)
            {
                fast=fast->next;
                slow=slow->next;
            }
            slow->next=NULL;
            l=slow->next->data;
            return ;
        }
    }
}
bool pali(node* head)
{
    node* temp=head;
    node* temp1=head;
    stack<int>s;
    while(temp!=NULL)
    {
        s.push(temp->data);
        temp=temp->next;
    }
    int i=0;
    while(i!=4)
    {
        if(temp1->data!=s.top())
        return false;

        i++;
        s.pop();
        temp1=temp1->next;
    }
    return true;

}
/*node* reverse(node* &head)
{
    node* temp=head;
    node* cur=head;
    node* prev=NULL;
    node* nextp;
    while(cur!=NULL)
    {
        nextp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nextp;

    }
return prev;
}*/
node* reverse(node* head, int left , int right)
{
    node* temp=head;
    int count=1;
    stack<int>s;
    while(temp->next!=NULL)
    {
        if(count>=left && count<=right)
        {
            s.push(temp->data);
        }
        count++;
    }
    

}
void print(node* head)
{
    node* temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}
int main()
{
    node* head=new node(1);
    insertinto(head, 2);
    insertinto(head  , 2);
    insertinto(head, 4);
    insertinto(head,5);
    insertinto(head, 6);
    print(head);
    reverse(head , 2,5);
    /*if(pali(head))
    cout<<"yes"<<endl;
    else
    cout<<"No"<<endl;*/
    //createloop(head);
    /*if(looppresent(head))
    cout<<"yes, loop present"<<endl;
    else
    cout<<"no loop present"<<endl;
    removeloop(head);
    if(looppresent(head))
    cout<<"YES"<<endl;
    else
    cout<<"no"<<endl;
    cout<<l<<endl;*/
    //reverse(head);
    print(head);

    return 0;
} 
