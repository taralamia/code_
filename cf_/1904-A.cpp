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
     int a,b;
     cin>>a>>b;
     int xk,yk;
     cin>>xk>>yk;
     int xq,yq;
     cin>>xq>>yq;
     vector<ll>d1={a,-a,a,-a,b,b,-b,-b};
     vector<ll>d2={b,b,-b,-b,a,-a,a,-a};
     set<pair<int,int>>set1,set2;
     for(int i=0; i<8; i++)
     {
        set1.insert({xk+d1[i],yk+d2[i]});
        set2.insert({xq+d1[i],yq+d2[i]});
     }
     int ans=0;
     for(auto i:set1)
     {
        if(set2.find(i)!=set2.end())
        {
           ans++;
        }
     }
     cout<<ans<<endl;
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
Author- Tabassum Tara Lamia
A knight can move 8 different position, which is indicated by 
the d1 and d2 vector. From king position we can define a set of 
pair which will contain the possible danger position where knight
can kill it,same goes for the Queen. And after calculating all 16 
positions how many same pairs they have we'll store it to the ans var.
*/