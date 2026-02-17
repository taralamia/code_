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
   int px,py;
   cin>>px>>py;
   string s;
   cin>>s;
   int cntR,cntU,cntD,cntL;
   cntR=count(s.begin(),s.end(),'R');
   cntU=count(s.begin(),s.end(),'U');
   cntD=count(s.begin(),s.end(),'D');
   cntL=count(s.begin(),s.end(),'L');
   int f1=0,f2=0;
   if(px==0 && py==0)
   {
    cout<<"YES\n";
    return;
   }
   if(px>=1)
   {
     if(cntR>=px)
     {
        f1=1;
     }
   }
   else if(px<0)
   {
     if(cntL>=(px*(-1)))
     {
        f1=1;
     }
   }
   if(py==0)
   {
     if(f1==1)
     {
        cout<<"YES\n";
        return;
     }
   }
   if(py>=1)
   {
      if(cntU>=py)
      {
        f2=1;
      }
   }
   else if(py<0)
   {
     if(cntD>=py*((-1)))
     {
        f2=1;
     }
   }
   if(px==0)
   {
     if(f2==1)
     {
        cout<<"YES\n";
        return;
     }
   }
   if(f1==1 && f2==1)
   {
     cout<<"YES\n";
   }
   else
   {
    cout<<"NO\n";
   }
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
