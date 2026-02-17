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
   ll N,Q;
   cin>>N>>Q;
   vector<ll>pc(N);
   for(ll i=0; i<N; i++)
   {
     pc[i]=i+1;
   }
   for(ll i=0; i<Q; i++)
   {
      ll X,Y;
      cin>>X>>Y;
      ll cnt=0;
      for(ll j=0; j<X; j++)
      {
         if(pc[j]<=X)
         {
            pc[j]=Y;
            cnt++;
         }
      }
      cout<<cnt<<endl;
     // up.PB(cnt);
   }
    
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //int t;
    //cin>>t;
    //while(t--){
    solve();
    //}
}


