#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define vii vector<int>
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
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(n%2==0)
            cout<<"Yes\n";
        else
        {
            ll temp = n-k;
            if(temp%2==0)
                cout<<"Yes\n";
            else
               cout<<"No\n";
        }
    }
    return 0;
}

