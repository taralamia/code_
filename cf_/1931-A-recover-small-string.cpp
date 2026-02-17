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
   
   int a=1,b=0,c=0;
   int s=n-1;
   if(n<=26)
   {
    c=s-a;
    b=s-c;
   }
   else if(n>26)
   {
     if(s<=26)
     {
        c=s-a;
        b=n-a-c;
     }
     else
     {
        c=26;
        if((n-c-a)<26)
        {
            b=n-c-a;
        }else
        {
            b=26;
            a=n-b-c;
        }
     }
   }
   a=a+96;
   b=b+96;
   c=c+96;
   cout<<(char)a<<(char)b<<(char)c<<endl;
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
