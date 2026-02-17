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
  vector<ll>a(n);
  for(int i=0; i<n; i++)
  {
     cin>>a[i];
  } 
  int flag=0;
  for(int i=0; i<n-1; i++)
  {
     if(a[i]>a[i+1])
     {
       flag=1;
       break;
     }
  }
  if(flag==0)
  {
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
  }
  int even=0,odd=0;
  for(int i=0; i<n; i++)
  {
     if(a[i]%2==0)
     {
        even++;
     }
     else
     {
        odd++;
     }
  }
  if((even==n) || (odd==n))
  {
     for(int i=0; i<n; i++)
     {
        cout<<a[i]<<" ";
     }
     cout<<endl;
     return;
  }
  sort(a.begin(),a.end());
  for(auto i:a)
  cout<<i<<" ";
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
