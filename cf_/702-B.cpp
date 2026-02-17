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
bool isPowerofTwo(ll n) {
        return (n > 0) && ((n & (n-1)) == 0);
}
void solve()
{
    int n; 
    cin>>n;
    vector<ll>nums(n);
    for(int i=0; i<n; i++)
    {
       cin>>nums[i];
    }
    ll cnt=0;
    map<int,int> m1;
    for(int i=0; i<n; i++)
    {
       for(int j=0; j<=30; j++)
       {
          int sum=(1<<j);
          int need=sum-nums[i];
          cnt+=m1[need];
       }
       m1[nums[i]]++;
    }
    cout<<cnt<<endl;
}  
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}
/*
Author- Tabassum Tara Lamia
*/

