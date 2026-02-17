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
   vector<int>v(N);
   for(int i=0; i<N; i++)
   {
     cin>>v[i];
   }
   sort(v.begin(),v.end());
   int c = 0,c1=INT_MIN;
   for(int i=0; i<N-1; i+=2)
   {
     c = abs(v[i]-v[i+1]);
     c1=max(c,c1);
   }
   cout<<c1<<endl;
   
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   
    int t;
    cin>>t;
    while(t--)
    {
     solve();
    }

}