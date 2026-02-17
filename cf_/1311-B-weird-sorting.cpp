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
  int m,n;
  cin>>m>>n;
  vector<int>v(m);
  for(int i=0; i<m; i++)
  {
    cin>>v[i];
  }
  vector<int>v1;
  for(int i=0; i<n; i++)
  {
    int temp;
    cin>>temp;
    temp--;
    v1.PB(temp);
  }
  
  for(int i=0; i<m; i++)
  {
     for(int j=0; j<n; j++)
     {
        int a1=v1[j];
        int a2=a1+1;
        if(v[a1]>v[a2])
        {
            swap(v[a1],v[a2]);
        }
     }
  }
  
  for(int i=0; i<m-1; i++)
  {
    if(v[i]>v[i+1])
    {
        cout<<"NO\n";
        return;
    }
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


