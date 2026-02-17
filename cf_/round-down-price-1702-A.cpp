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
        ll p1=pow(10,0),p2=pow(10,1),p3=pow(10,2);
        ll p4=pow(10,3),p5=pow(10,4),p6=pow(10,5);
        ll p7=pow(10,6),p8=pow(10,7),p9=pow(10,8);
        ll p10=pow(10,9);
        if(n>=p1 && n<p2)
        {
            cout<<n-p1<<endl;
        }
        if(n>=p2 && n<p3)
        {
            cout<<n-p2<<endl;
        }
        if(n>=p3 && n<p4)
        {
            cout<<n-p3<<endl;
        }
        if(n>=p4 && n<p5)
        {
            cout<<n-p4<<endl;
        }
        if(n>=p5 && n<p6)
        {
            cout<<n-p5<<endl;
        }
        if(n>=p6 && n<p7)
        {
            cout<<n-p6<<endl;
        }
        if(n>=p7 && n<p8)
        {
            cout<<n-p7<<endl;
        }
        if(n>=p8 && n<p9)
        {
            cout<<n-p8<<endl;
        }
        if(n>=p9 && n<p10)
        {
            cout<<n-p9<<endl;
        }
        if(n>=p10)
        {
            cout<<n-p10<<endl;
        }

    }
}




