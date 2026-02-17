#include<bits/stdc++.h>
using namespace std;
void  brr(int n,vector<vector<int>> v1){
    deque<int> p1;
    for(int i=0; i<1; i++)
    {
        for(int j=0; j<v1[i].size(); j++)
        {
            p1.push_back(v1[i][j]);
        }
    }
    int n1 = v1.size()-1;
    for(int i=n1; i>=n1; i--)
    {
        for(int j=0; j<v1[i].size(); j++)
        {
            if(j!=0)
            {
                p1.push_back(v1[j][i]);
            }
        }
    }
    int sum=0;
    for(int i=0; i<p1.size(); i++)
    {
        sum+=p1[i];
    }
    int val = n*(2*n+1);
    int ans = val - sum;
    p1.push_front(ans);
    for(auto x:p1)
    cout<<x<<" ";
    p1.clear();
    v1.clear();
}
int main()
{
    int t;
    cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<vector<int>> v1;
    for(int i=0; i<n; i++)
    {
         vector<int> v;
        for(int j=0; j<n; j++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        v1.push_back(v);
    }
    brr(n,v1);
  }
}