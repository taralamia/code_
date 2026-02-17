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
   string s;
   cin>>s;
   int start=0,end=N-1;
   int k=0;
   while(start<=N/2)
   {
     if((s[start]=='0' && s[end]=='1') || (s[start]=='1' && s[end]=='0'))
     {
        start++;
        end--;
        if(start>=end)
     {
        if(N%2!=0)
        {
         cout<<1<<endl;
         return;
        }
        else{
        cout<<0<<endl;
        return;
        }
     }
     }
     else if((s[start]=='1' && s[end]=='1') || (s[start]=='0' && s[end]=='0'))
     {
        k=end-start+1;
        cout<<k<<endl;
        return;
     }
     
   }  
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