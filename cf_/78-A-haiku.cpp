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
  int n=3,f1=0,f2=0,f3=0;
  while(n--)
  {
    string s;
    getline(cin,s);
    int N1=s.size();
    int cnt=0,i=0;
    while(i<N1)
    {
      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
     {
        if(s[i]!=' ')
        cnt++;
     }
      i++;
    }
    //cout<<cnt<<endl;
    if(cnt==5 && n==2)
    {
      f1=1;
    }
    else if(cnt==7 && (n==1))
    {
        f2=1;
    }
    else if(cnt ==5 && (n==0))
    {
        f3=1;
    }
  }
  if(f1==1 && f2==1 && f3==1)
  cout<<"YES\n";
  else
  cout<<"NO\n";
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
