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
  string s,bs="meow";
  int N;
  cin>>N;
  cin>>s;
  for(auto& c:s){
  c=tolower(c);
  }
  if(N<4)
  {
    cout<<"NO\n";
    return;
 }
 ll i=0; 
 ll f1=0,f2=0,f3=0,f4=0;
 while(i<N && s[i]=='m')
 {
    f1=1;
    i++;
 }
 if(f1!=1)
 {
    cout<<"NO\n";
    return;
 }
 while(i<N && s[i]=='e')
 {
    f2=1;
    i++;
 }
 if(f2!=1)
 {
    cout<<"NO\n";
    return;
 }
 while(i<N && s[i]=='o')
 {
    f3=1;
    i++;
 }
 if(f3!=1)
 {
    cout<<"NO\n";
    return;
 }
 while(i<N && s[i]=='w')
 {
    f4=1;
    i++;
 }
 if(f4!=1)
 {
    cout<<"NO\n";
    return;
 }
 if(i<N)
 {
    cout<<"NO\n";
    return;
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
