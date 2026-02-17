#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        int flag=0;
        cin>>n>>k;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        for(int i=0; i<n-1; i++)
        {
            if(v[i]>v[i+1])
            {
                flag = 1;
            }
        }

        if(n==k || k>=2 || flag ==0)
        cout<<"Yes";
        else
        cout<<"No";
    }
}
