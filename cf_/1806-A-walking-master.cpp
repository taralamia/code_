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
   ll x1,y1,x2,y2;
   cin>>x1>>y1>>x2>>y2;
   ll cnt=0;
   if(x1==x2 && y1==y2)
   {
     cout<<0<<endl;
     return;
   }
   if(y1!=y2)
   {
     if(y1<y2)
     {
        while(y1!=y2)
        {
            y1=y1+1;
            x1=x1+1;
            cnt=cnt+1;
        }
     }
     else
     {
       cout<<-1<<endl;
       return;
     }
   }
   if(y1==y2 && x1!=x2)
   {
     if(x1>x2)
     {
        while(x1!=x2)
        {
            x1=x1-1;
            cnt=cnt+1;
        }
     }
     else
     {
      cout<<-1<<endl;
      return;
     }
   }
   cout<<cnt<<endl;
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
