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
bool checkNonDigitZero(ll n)
{
    ll temp1=n,temp2=0,temp3=0;
    while(temp1/10)
    {
        temp1 =temp1/10;
        temp2=temp1;
        if(temp2 >10 && temp2 <99)
            break;
        //cout<<temp2<<" "<<temp3<<endl;
    }
    //cout<<temp2<<" "<<endl;
    if(temp2>=1 && temp2<=9)
        return true;
    else
        return false;
}
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
       string s = to_string(n);
       cout<<(9*(s.size()-1)+(s[0]-'0'))<<endl;
    }
}
/*
0-9-> 1 digit (9 round int)
10-99 -> 2 digit (9 round int)
100-999 -> 3 digit(9 round int)
------
220 -> size / digit no. 3
we are sure that till 99 the round number will be 9 * size. that's why we
are reducing 1 from the number size of 220, now we need to find the how
many round number is present from the range 100 to 220. if we count manually
100,200 are only two round number and we can see the first digit of 220 is '2'.
thus we are adding 2.
*/
