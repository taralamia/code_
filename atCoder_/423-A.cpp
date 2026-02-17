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


    double x,c,f1=0;
    cin>>x>>c;
    double i=1000;
    while(i<=999*1000)
    {
        ll x1 = x-i;
        ll c1 = (c/1000.0)*x1;
        ll x2 = x1+c1;
        if(x2<=x && c1>=1000)
        {
            cout<<x1<<endl;
            f1=1;
            break;
        }
        i+=1000;
    }
    if(f1==0)
        cout<<0<<endl;

}



