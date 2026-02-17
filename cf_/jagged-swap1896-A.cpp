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
int sorted(vector<int>& a)
{
    int b=1;
    int n=a.size();
    for(int i=1; i<n; i++)
    {
        if(a[i]>a[i+1])
        {
            b=0;
            break;
        }
    }
    return b;
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
   int N1=N;
   while(N1--){
   for(int i=1; i<N-1; i++)
   {
      if(v[i]>v[i-1] && v[i]>v[i+1])
      {
        swap(v[i],v[i+1]);
      }
   } 
   }
   int f=1;
   for(int i=0; i<N-1; i++)
    {
        if(v[i]>v[i+1])
        {
            f=0;
            break;
        }
    }
   if(f==1)
   {
    cout<<"Yes\n";
   }
   else if(f==0)
   {
    cout<<"No\n";
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
/*
refactored: 
check if v[i]==1 => print yes
else no
*/