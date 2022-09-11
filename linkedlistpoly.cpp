#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int coeff;
    int power;
    node* next;
    node( int val , int p)
    {
        coeff=val;
        power=p;
        next=NULL;
    }
};
void insertat(node* &head, int sum ,int pp)
{
    node* newnode=new node( sum , pp);
    if(head==NULL)
    {
        head=newnode;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=newnode;


}
node* add(node* n1 , node* n2)
{
    vector<pair<int, int>>v1;
    vector<pair<int , int>>v2;
    node* temp1=n1;
    node* temp2=n2;
    while(temp1!=NULL)
    {
        v1.push_back({temp1->power , temp1->coeff});
        temp1=temp1->next;
    }   
    while(temp2!=NULL)
    {
        v2.push_back({temp2->power , temp2->coeff});
        temp2=temp2->next;
    }

    map<int ,vector<int>>mp;
    for(int i=0;i<v1.size();i++)
    {
        mp[v1[i].first].push_back(v1[i].second);
    }
    for(int i=0;i<v2.size();i++)
    {
        mp[v2[i].first].push_back(v2[i].second);
    }
    vector<int>ven;
    vector<int>po;
    for(auto i:mp)
    {
        vector<int>adi=i.second;
        int sum=0;
        for(int k=0;k<adi.size();k++)
        {
            sum+=adi[k];
        }
        po.push_back(i.first);
        ven.push_back(sum);
    }
    int c1=ven[0];
    int pow1=po[0];
    int c2=ven[1];
    int pow2=po[1];
    int c3=ven[2];
    int powe=po[2];

    node* newnode=new node(c1 , pow1);
    newnode->next=new node(c2, pow2);
    newnode->next->next=new node(c3 , powe);

    return newnode;

}
int main()
{
    node* n1=new node(2 , 1);
    n1->next=new node(2 , 2);
    n1->next->next=new node(3 , 3);
    node* n2=new node( 5 , 1);
    n2->next=new node(6 , 2);
    n2->next->next=new node(8 , 3);

      cout<<"hello";
    node* n3= add(n1, n2);// yha se panga surur
    node* temp=n3;
    cout<<endl;
    string ans="";
    while(temp!=NULL)
    {
        ans+=to_string(temp->coeff)+"X"+"^"+to_string(temp->power)+"+ ";
        temp=temp->next;
    }
    ans=ans.substr(0 , ans.size()-2);
    cout<<ans<<endl;



}