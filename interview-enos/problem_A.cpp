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
}

void solve()
{
    int N,H,Y1,Y2,L;
    cin>>N>>H>>Y1>>Y2>>L;
    
    int barriers_passed = 0;
    int stamina = L;
    
    for(int i=0;i<N;i++){
        int t,x;
        cin>>t>>x;
        
        bool can_pass = false;
        
        if(t==1){
            if(H - Y1 >= x) can_pass = true;
        }
        else{
            if(Y2 >= x) can_pass = true;
        }
        
        if(can_pass){
            barriers_passed++;
        }
        else{
            if(stamina > 0){
                stamina--;
                if(stamina > 0){
                    barriers_passed++;
                }
                else{
                    stamina = 0;
                }
            }
        }
    }
    
    cout<<barriers_passed<<"\n";
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