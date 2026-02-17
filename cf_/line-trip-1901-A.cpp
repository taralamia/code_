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
        int n,x;
        cin>>n>>x;
        vector<int>station(n);
        for(int i=0; i<n; i++)
        {
            cin>>station[i];
        }
        station.insert(station.begin(),0);
        station.push_back(x);
        int gap1=INT_MIN;
        for(int i=1; i<station.size(); i++)
        {
            gap1=max(gap1,(station[i]-station[i-1]));
        }
        int gap2 = (station[n+1]-station[n]) * 2;
        gap1 = max(gap2,gap1);
        cout<<gap1<<endl;
    }

}


