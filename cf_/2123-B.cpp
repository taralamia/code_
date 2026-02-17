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
     int n,j,k;
     cin>>n>>j>>k;
     vector<int>a(n);
     for(int i=0; i<n; i++)
     {
        cin>>a[i];
     }
     int val=a[j-1];
     a[j-1]=-1;

     int b=INT_MIN;
     for(int i=0; i<n ; i++)
     {
         if(a[i]>b && a[i]!=-1)
         {
            b=a[i];
         }
     }
     //cout<<b<<endl;
     if(val>=b || k>1)
     {
        cout<<"YES\n";
     }
     else
     {
        cout<<"NO\n";
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
Author- Tabassum Tara Lamia
*/


// 2 3 -ok
// 3 2
