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
   int N;
   cin>>N;
   vector<ll>a(N);
   for(int i=0; i<N; i++)
   {
     cin>>a[i];
   }
   map<ll,ll>map1;
   for(const auto i:a)
   {
      map1[i]++;
   }
   if(map1.size()==1)
   {
    cout<<-1<<endl;
    return;
   }
   sort(a.begin(),a.end());
   int N1=map1.begin()->second;
   vector<int>b;
   vector<int>c;
   int j=0,N2=0;
   for(int i=0; i<N1; i++)
   {
     b.PB(a[i]);
     j=i;
   }
   j++;
   while(j<N)
   {
     c.PB(a[j]);
     j++;
   }
   N1=b.size();
   N2=c.size();
   cout<<N1<<" "<<N2<<endl;
   for(auto i:b)
   cout<<i<<" ";
   cout<<endl;
   for(auto i:c)
   cout<<i<<" ";
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
