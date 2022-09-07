#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="(()";
    stack<char>st;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        st.push(s[i]);
        else
        {
            if(st.top()=='(')
            {
                count+=2;
                st.pop();
            }
        }
    }
    cout<<count<<endl;

return 0;
}