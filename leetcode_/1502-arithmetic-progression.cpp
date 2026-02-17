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
void solve()
{
    vector<int>v={1,2,4};
    int a1=v[0];
    bool b=true;
    int N=v.size();
    for(int i=1; i<N; i++)
    {
        if(abs(a1-v[i])!=abs(a1-v[i+1]))
        {
            b=false;
            break;
        }
    }
//  return b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

}
