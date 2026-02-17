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
   int n1,n2;
   cin>>n1>>n2;
   string s,t;
   cin>>s>>t; 
   string res=s;
   int cnt=0,N2=t.size();
   if(s.find(t)!=-1)
   {
     cout<<cnt<<endl;
     return;
   }
   while(cnt<6)
   {
     res+=s;
     s=res;
     cnt++;
     if(s.find(t)!=-1)
     {
        cout<<cnt<<endl;
        return;
     }
    
   }
   
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
