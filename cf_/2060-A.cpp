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
  vector<int>a(5);

  int a3_1=0,a3_2=0,a3_3=0;
  for(int i=0; i<5; i++)
  {
    if(i!=2)
    {
        cin>>a[i];
    }
  }
  a3_1=a[0]+a[1];
  a[2]=a3_1;
  int idx=2,idx1=0,cnt=0,cnt1=0;
  while(idx1<4)
  {
     if(a[idx1]+a[idx1+1]==a[idx])
     {
        cnt++;
     }
     idx1++;
     idx++;
  }
  a3_2=a[3]-a[1];
  a[2]=a3_2;
  idx=2,idx1=0;
  while(idx1<4)
  {
    if(a[idx1]+a[idx1+1]==a[idx])
     {
        cnt1++;
     }
     idx1++;
     idx++;
  }
  cnt1=max(cnt,cnt1);
  a3_3=a[4]-a[1];
  a[2]=a3_3;
  idx=2,idx1=0;
  cnt=0;
  while(idx1<4)
  {
    if(a[idx1]+a[idx1+1]==a[idx])
     {
        cnt++;
     }
     idx1++;
     idx++;
  }
  cnt1=max(cnt,cnt1);
  cout<<cnt1<<endl;
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