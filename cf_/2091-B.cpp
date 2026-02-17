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
    int n,x;
    cin>>n>>x;
    int team=0;
    vector<int>v1(n);
    for(int i=0; i<n; i++)
    {
       cin>>v1[i];
    }   
    sort(v1.begin(),v1.end());
    reverse(v1.begin(),v1.end());
    for(int i=0,cnt=1; i<n; i++,cnt++)
    {
        int prod=cnt*v1[i];
        if(prod>=x)
        {
            cnt=0;
            team++;
        }
    }
    cout<<team<<endl;
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
