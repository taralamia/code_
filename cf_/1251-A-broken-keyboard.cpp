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
   string s;
   cin>>s;
   int N=s.size();
   if(N==1)
   {
    cout<<s<<endl;
    return;
   }
   string res="";
   for(int i=0; i<N; i++)
   {
     if(s[i]==s[i+1])
     {
        i+=1;
     }
     else if(s[i]!=s[i+1])
     {
        res+=s[i];
     }
   }
   set<char>s1;
   int N2=res.size();
   for(int i=0; i<N2; i++)
   {
     s1.insert(res[i]);
   }
   for(auto x:s1)
   {
     cout<<x;
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