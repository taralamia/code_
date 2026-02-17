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
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        map<int,int> mp;
        for(auto x:a)
        {
            mp[x]++;
        }
        if(mp.size()>2)
            cout<<"No\n";
        auto it= mp.begin();
        auto it1=it;
        it++;
        auto n_it= it;
        int a1=0,b1=0;
        if(mp.size()==2)
        {
            a1=it1->second;
            b1 = n_it->second;
            if(a1>b1 && (b1+1)==a1)
            {
                cout<<"Yes\n";
            }
            else if(a1<b1 && (a1+1)==b1)
            {
                cout<<"Yes\n";
            }
            else if(a1==b1)
            {
                cout<<"Yes\n";
            }
            else
                cout<<"No\n";
        }
        if(mp.size()==1)
        {
            cout<<"Yes\n";
        }

    }

}


