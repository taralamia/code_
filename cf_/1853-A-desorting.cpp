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
bool sorted(vector<int>& a)
{
    bool b=true;
    int n=a.size();
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            b=false;
            break;
        }
    }
    return b;
}
void solve()
{ 
   int N;
   cin>>N;
   vector<int> v(N);
   for(int i=0; i<N; i++)
   {
      cin>>v[i];
   }
   bool b = sorted(v);
   if(!b)
   {
     cout<<0<<endl;
     return;
   }
   int cnt=0;
   int idx1=0,idx2=1;
   int diff=v[idx2]-v[idx1];
   if(N>2){
   for(int i=2; i<N; i++)
   {
      if((v[i]-v[i-1])<diff)
      {
        diff=v[i]-v[i-1];
        idx1=i-1;
        idx2=i;
      }
   }
}
   cnt = diff/2+1;
   cout<<cnt<<endl;
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
// we are adding 1 and subtracting 1 for two particular adjacent element
// so the situation is v[i]+1 > v[i+1]-1 => v[i]-v[i+1] => 2 
// v[i]-v[i+1] =diff so diff/2