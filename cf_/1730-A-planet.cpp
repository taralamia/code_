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
  int n,c,c1=0,c2=0;
  cin>>n>>c;
  
  vector<int>a(n);
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  map<int,int>freq;
  for(const auto& i:a)
  {
    freq[i]++;
  }
 // for(auto x:freq)
 // cout<<x.first<<" "<<x.second<<endl;
  for(auto& i:freq)
  {
    if(i.second>c)
    {
        c2++;
    }
    else
    {
        c1+=i.second;
    }
  }
  c=c2*c;
  cout<<c+c1<<endl;
 
  
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
