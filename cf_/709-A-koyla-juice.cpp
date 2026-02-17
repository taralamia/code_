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
   int n,b,d;
   cin>>n>>b>>d;
   vector<int>v;
   for(int i=0; i<n; i++)
   {
     int temp;
     cin>>temp;
     if(temp<=b)
     {
        v.PB(temp);
     }
   }
   int N1=v.size();
   int s1=0,cnt=0;
   for(int i=0; i<N1; i++)
   {
      s1+=v[i];
      if(s1>d)
      {
        cnt++;
        s1=0;
      }
   }
   cout<<cnt<<endl;
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
