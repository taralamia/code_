#include <bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            int value;
            cin>>value;
            a[i]=value;
        }
        int max_value=INT_MIN;
        for(int i=0; i<a.size(); i++)
        {
            max_value=max(a[i],max_value);
        }
        max_value=max_value+1;
        vector<int> ans;
        for(int i=0; i<n; i++)
        {
            int diff=max_value-a[i];
            ans.push_back(diff);
        }
        for(auto p: ans)
            cout<<p<<" ";
     }
}

