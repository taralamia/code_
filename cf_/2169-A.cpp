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
    ll n,a; 
    cin>>n>>a;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int cnt1=0,cnt2=0,flag=0,flag1=0;
    int val=0,val2=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]<a)
        {
            cnt1++;
            if(flag1==0)
            {
               val2=v[i];
               flag1=1;
            }
        }
        else if(v[i]>a)
        {
            cnt2++;
            if(flag==0)
            {
               val=v[i];
               flag=1;
            }
        }
    }
    if(cnt1>=cnt2)
    {
        cout<<val2<<endl;
    }
    else
    {
        cout<<val<<endl;
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


