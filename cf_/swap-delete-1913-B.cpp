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
   string s,res;
   cin>>s;
   int N=s.size();
   int zCnt=0,oneCnt=0;
   zCnt=count(s.begin(),s.end(),'0');
   oneCnt=count(s.begin(),s.end(),'1');
   for(int i=0; i<N; i++)
   {
     if(s[i]=='0')
     {
        if(oneCnt==0)
        break;
        oneCnt--;
     }
     else if(s[i]=='1')
     {
       if(zCnt==0)
       break;
        zCnt--;
     }
   }
   cout<<zCnt+oneCnt<<endl;
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


