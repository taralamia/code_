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
void fast_io_initialization()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{
    fast_io_initialization();
    long long N;
    cin>>N;
    long long final_destiny=(N+1)/2;
    if(N&1) final_destiny=-final_destiny;
    cout<<final_destiny<<"\n";
}


int main()
{
    fast_io_initialization();
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
}
/*
Author- Tabassum Tara Lamia
*/