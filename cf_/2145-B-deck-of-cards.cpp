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
  int k,n;
  cin>>n>>k;
  vector<int>b;
  for(int i=0; i<k; i++)
  {
    char c;
    cin>>c;
    int a=c-'0';
    b.PB(a);
  }
  if(n==k)
  {
    while(n--){
    cout<<'-';
    }
    cout<<endl;
    return;
  }
  int op1=count(b.begin(),b.end(),0);
  int op2=count(b.begin(),b.end(),1);
  int op3=count(b.begin(),b.end(),2);
  int u=1,d=n;
  u+=op1;
  d-=op2;
  int sureU=u+op3, sureD=d-op3;
  for(int i=1; i<=n; i++)
  {
     if(i<u || i>d)
     {
        cout<<'-';
     }
     else if(i>=sureU && i<=sureD)
     {
        cout<<'+';
     }
     else
     {
        cout<<'?';
     }
  }
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
