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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       vector<int > p;
       for(ll i=0; i<n; i++)
       {
           int val;
           cin>>val;
           p.PB(val);
       }
       ll temp=n+1;
       for(ll i=0; i<n; i++)
       {
           cout<<temp-p[i]<<" ";
       }

      cout<<endl;
    }
}



