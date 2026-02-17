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
    vector<int>num(n);
    for(int i=0; i<n; i++)
    {
       cin>>num[i];
    }
    sort(num.begin(),num.end(),greater<int>());
    int sum=0;
    sum+=num[0];
    for(int i=1; i<n; i++)
    {
       sum+=num[i];
       sum=sum-1;
    }
    cout<<sum<<endl;
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
