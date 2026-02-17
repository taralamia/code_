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
   vector<int>a(n);
   vector<int>b(n);
   for(int i=0; i<n; i++)
   {
     cin>>a[i];
   }
   for(int i=0; i<n; i++)
   {
     cin>>b[i];
   }
   int idx=0,cnt=0,idx1=0;
   while(idx<n)
   {
     if(a[idx]<b[idx])
     {
        cnt=b[idx]-a[idx];
        break;
     }
     idx++;
   }
   while(idx1<n)
   {
      if(idx!=idx1)
      {
        int temp=a[idx1]-b[idx1];
        if(temp<cnt)
        {
          cout<<"NO\n";
          return;  
        }
      }
      idx1++;
   }
   cout<<"YES\n";
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
