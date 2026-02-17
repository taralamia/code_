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
void solve()

{

    int n;
    cin >> n;

    map<int, int> mp;

    for (int i = 0; i < n; i++)

    {

        int val;

        cin >> val;

        mp[val]++;

    }



    if (mp.size() >= 3)

        cout << "No" << '\n';

    else

    {

        cout<<abs(mp.begin()->second-mp.rbegin()->second)<<endl;
        //(abs(mp.begin()->second - mp.rbegin()->second) <= 1) ? cout << "Yes" << '\n' : cout << "No" << '\n';

    }

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
      solve();
    }


}
/*
a=b, b=c, c=a
*/
