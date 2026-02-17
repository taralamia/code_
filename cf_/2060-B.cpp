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
   int n,m;
   cin>>n>>m;
   //vector<pair<vector<int>, int>> p1;
   vector<vector<int>>p1;
   vector<pair<int,int>>res1;
    for (int i = 0; i < n; ++i) {
     vector<int>r1;
     for(int j=0; j<m; j++)
     {
        int temp;
        cin>>temp;
        r1.PB(temp);
     }        
     sort(r1.begin(),r1.end());
     p1.PB(r1);
     res1.PB(make_pair(p1[i][0],i));
}  
 sort(p1.begin(),p1.end());
 int flag=0;

 for(int i=0; i<n; i++)
 {
    for(int j=0; j<m-1; j++)
    {
       if(p1[i][j+1]-p1[i][j]!=n)
       {
          flag=1;
          break;
       }
    }
 }
   
   if(flag==0){
      sort(res1.begin(),res1.end());
     for(const auto& i:res1)
     {
        int temp=i.second + 1;
        cout<<temp<<" ";
     }
   }
   else
   {
     cout<<-1;
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
