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
ll reverseDigits(ll num)
{
    ll rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll X,Y;
    cin>>X>>Y;

    ll a1=X,a2=Y,a3;
    for(ll i=1; i<=8; i++)
    {
        a3 = a1+a2;
        if(a3>=10)
        {
            a3 = reverseDigits(a3);
        }
        a1 = a2;
        a2 = a3;
    }
    cout<<a3<<endl;
}

