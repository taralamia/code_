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
   vector<int>b;
   for(int i=0; i<N; i++)
   {
     int val;
     cin>>val;
     b.PB(val);
   }
   vector<int>a;
   a.PB(b[0]);
   for(int i=1; i<N; i++)
   {
      if(b[i]<b[i-1])
      {
          a.PB(b[i]);
      }
      a.PB(b[i]);
   }
   cout<<a.size()<<endl;
   for(auto x:a)
    cout<<x<<" ";
   cout<<endl;
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


