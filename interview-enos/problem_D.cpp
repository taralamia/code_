#include <bits/stdc++.h>
using namespace std;

void solve() {
    auto fast_io_initialization = [](){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    };
    fast_io_initialization();
    int N,K;
    cin>>N>>K;
    vector<int> gd_idx(N+1);
    if(K>N || (N-K)%2){
        cout<<-1<<"\n";
        return;
    }
    for(int i=1;i<=N;i++) gd_idx[i]=i;
    for(int i=K+1;i<=N;i+=2){
        swap(gd_idx[i],gd_idx[i+1]);
    }
    for(int i=1;i<=N;i++){
        if(i>1) cout<<" ";
        cout<<gd_idx[i];
    }
    cout<<"\n";
}

int main() {
    int T;
    cin >> T;
    while(T--) solve();
}
/*
Author- Tabassum Tara Lamia
*/