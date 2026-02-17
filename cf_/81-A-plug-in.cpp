#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define vcc vector<char>
#define pll pair<long long, long long>
#define mem memset
#define sof sizeof
#define PB push_back
#define UB upper_bound
#define LB lower_bound
#define MP make_pair
#define TS to_string
#define F first
#define S second
using namespace std;
const int M=1e5,M2=2e5,oo=1e9+7,mod=998244353;
ll ceil(ll a,ll b)
{
    return (a+b-1)/b;
}
void solve()
{ 
   string s;
   cin>>s;
   stack<char>st1;
   for(auto i:s)
   {
     int n1=st1.size();
     if(n1==0 || st1.top()!=i)
     {
        st1.push(i);
     }
     else
     {
        st1.pop();
     }
   }
   stack<char>res;
   while(!st1.empty())
   {
     res.push(st1.top());
     st1.pop();
   }
   while(!res.empty())
   {
     cout<<res.top();
     res.pop();
   }
}  
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   
    solve();
}
