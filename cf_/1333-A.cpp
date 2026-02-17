#include <bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v(n,vector<int>(m));
        for(int  i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if((i+j)%2==0)
                {
                    v[i][j]=1;
                }
            }
        }
        int num = (n*m)+1;
        if(num % 2 != 0)
        {
            v[0][1]=1;
        }
        for(int i=0; i<v.size(); i++)
        {
            for(int j=0; j<v[i].size(); j++)
            {
                if(v[i][j]==0)
                {
                    cout<<"W";
                }
                else
                {
                    cout<<"B";
                }
            }
            cout<<endl;
        }
     }
}

