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
   int n;
   cin>>n;
   string s;
   cin>>s;
   int f1=0,f2=0,idx=0;
   int cntL=count(s.begin(),s.end(),'L');
   int cntR=count(s.begin(),s.end(),'R');
   if(cntL==0 || cntR==0)
   {
    cout<<-1<<endl;
    return;
   }
   for(int i=0; i<n-1; i++)
   {
      if(s[i]=='R' && s[i+1]=='L')
      {
         f1=1;
         break;
      }    
   }
   for(int i=0; i<n-1; i++)
   {
      if(s[i]=='L' && s[i+1]=='R')
      {
        f2=1;
        idx=i;
      }
   }
   if(f1==1)
   cout<<0<<endl;
   else if(f2==1)
   cout<<idx+1<<endl;
   else
   cout<<-1<<endl;
   
   
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
