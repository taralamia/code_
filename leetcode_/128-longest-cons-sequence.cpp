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
  vector<int> v1={9,1,4,7,3,-1,0,5,8,-1,6};
  set<int> s1;
  vector<int>v2;
  for(auto x:v1)
  {
    s1.insert(x);
  }
  for(auto x:s1)
  {
    v2.PB(x);
  }
  int N=v2.size();
  int cnt=0,cnt1=INT_MIN;
  for(int i=1; i<N; i++)
  {
     if(abs(v2[i-1]-v2[i])==1)
     {
        cnt++;
        cnt1=max(cnt1,cnt);
     }
     else
     {
        cnt=0;
     }
  }
  cout<<cnt1+1<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   
    solve();
    
}
