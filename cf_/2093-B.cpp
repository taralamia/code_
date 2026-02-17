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
   ll n=s.size();
   int cnt0=0,pos=0;

   for(int i=n-1; i>=0; i--)
   {
      if(s[i]!='0')
      {
         pos=1;
      }
      else if(pos==1)
      {
        cnt0++;
      }
   }
   cnt0=cnt0+1;
   cout<<n-cnt0<<endl;
}  
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}
