#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p[6] = { 10, 4, 5, 90, 120, 80 };
    stack<int>st;
    vector<int>v;
    for(int i=0;i<6;i++)
    {
        int count=1;
        vector<int>v1;
        while(p[i]>st.top())
        {
            count++;
            v1.push_back(st.top());
            st.pop();
        }
        for(int i=v1.size()-1;i>=0;i++)
        {
            st.push(v1[i]);
        }
        st.push(p[i]); 
        v.push_back(count);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

return 0;
}