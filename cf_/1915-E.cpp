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
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++)
    {
        cin>>nums[i];
    }
    map<ll,ll> prefixCount;
    ll sum = 0;
    prefixCount[0] = 1;  

    for (int i=0; i<n; i++) {
        nums[i]*=((i%2) ? -1:1);
        sum += nums[i];

        if (prefixCount.count(sum)) {
            cout<<"YES\n";
            return;
        }
        prefixCount[sum]++;
    }
    cout<<"NO\n";
    
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

