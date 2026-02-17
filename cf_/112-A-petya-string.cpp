#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define vec vector<int>
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
  string s1,s2;
  cin>>s1>>s2;
  for(auto& x:s1)
  {
     x=tolower(x);
  }
  for(auto& x:s2)
  {
     x=tolower(x);
  }
  int N=s1.size();
  bool f=false;
  for(int i=0; i<N; i++)
  {
     if(s1[i]>s2[i])
     {
        cout<<1<<endl;
        return;
     }
     if(s1[i]<s2[i])
     {
        cout<<-1<<endl;
        return;
     }
  }
  for(int i=0; i<N; i++)
  {
     if(s1[i]!=s2[i])
     {
        f=true;
        break;
     }
  }
  if(!f)
  {
    cout<<0<<endl;
  }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}


