#include<bits/stdc++.h>
using namespace std;
void insertatbottom(stack<int>s , int t)
{
    if(s.empty())
    {
        s.push(t);
        return;
    }
    int m=s.top();
    s.pop();
    insertatbottom(s, t);
    s.push(m);
}
void reverse(stack<int>s)
{
    if(s.empty())
    {
        return ;
    }
    int t=s.top();
    s.pop();
    reverse(s);
    insertatbottom(s , t);

}
int main()
{
    stack<int>s;
    s.push(2);
    s.push(3);
    s.push(5);
    s.push(6);
    reverse(s);

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}