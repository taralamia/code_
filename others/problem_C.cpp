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

void fast_io_initialization() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void solve()
{ 
    auto fast_io_initialization = [](){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    };
    fast_io_initialization();
    static int cs = 1;
    long long H;
    cin >> H;
    vector<long long> cdx_list;
    long long bl = (H - 9 + 8) / 9;
    if(bl < 0) bl = 0;
    long long bh = H / 9;
    for(long long B = bl; B <= bh; B++){
        long long d = H - 9 * B;
        if(d >= 0 && d <= 9){
            long long A = B * 10 + d;
            if(A / 10 == B) cdx_list.push_back(A);
        }
    }
    sort(cdx_list.begin(), cdx_list.end());
    cout << "Case " << cs++ << ":";
    for(auto x : cdx_list) cout << " " << x;
    cout << "\n";
}
int main()
{
    fast_io_initialization();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}