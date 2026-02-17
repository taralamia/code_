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
    if(n%2!=0)
    {
        cout<<"0\n";
        return;
    }
    n=n/2;
    int y=1;
    y=n/2;
    y=y-0+1;
    cout<<y<<endl;

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
/*2x+4y=48
x+2y=24
x=24-2y
y>=0
24-2y=0
24=2y
y=12
0,...12
12-0+1
13

2x+4y=6
x+2y=3
x=3-2y
y>=0
3-2y=0
3=2y
y=1
0,..1
1-0+1=2*/
