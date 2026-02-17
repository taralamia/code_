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
void fast_io_initialization()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

vector<pair<int,int>> g[30005];
ll dista[30005];
int node_stamp;

void dfs(int u,int p,ll d)
{
    dista[u]=d;
    if(d>dista[node_stamp]) node_stamp=u;
    for(auto &e:g[u])
    {
        if(e.first!=p)
            dfs(e.first,u,d+e.second);
    }
}
ll solve()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) g[i].clear();
    for(int i=0;i<n-1;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    memset(dista,0,sizeof(dista));
    node_stamp=0;
    dfs(0,-1,0);
    memset(dista,0,sizeof(dista));
    dfs(node_stamp,-1,0);
    return dista[node_stamp];
}

int main()
{
    fast_io_initialization();
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        ll ans=solve();
        cout<<"Case "<<i<<": "<<ans<<"\n";
    }
}

/*
Author- Tabassum Tara Lamia
*/