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
   int N;
   cin>>N;
   vector<int>v;
   for(int i=0; i<N; i++)
   {
     int temp;
     cin>>temp;
     v.PB(temp);
   }
   int cnt2=count(v.begin(),v.end(),2);
   int cnt1=count(v.begin(),v.end(),1);
   if(cnt1==N)
   {
     cout<<1<<endl;
     return;
   }
   if(cnt2%2!=0)
   {
     cout<<-1<<endl;
     return;
   }
   cnt2=cnt2/2;
   int cnt=0;
   for(int i=0; i<N; i++)
   {
      if(v[i]==2)
      {
        cnt++;
      }
      if(cnt==cnt2)
      {
        cout<<i+1<<endl;
        return;
      }
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
