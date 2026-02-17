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
       ll x1,y1,x2,y2,x3,y3,x4,y4;
       cin>> x1>> y1;
       cin>> x2>> y2;
       cin>> x3>> y3;
       cin>> x4>> y4;
       ll c1 = pow(abs(x1-x3),2);
       ll c2 = pow(abs(y1-y3),2);
       c2 = sqrt(c1+c2);
       ll res1 = pow(c2,2);
       cout<<res1<<endl;
    }
    return 0;
}


