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
    int n;
    cin>>n;
    vector<int>a;
    vector<int>b;
    vector<int>c;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        a.PB(val);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]<=0)
        {
            c.PB(a[i]);
        }
        else
        {
            b.PB(a[i]);
        }
    }
    int s1=0,s2=0;
    for(int i=0; i<b.size(); i++)
    {
        s1+=b[i];
    }
    for(int i=0; i<c.size(); i++)
    {
        s2+=c[i];
    }
    s1-=s2;
    cout<<s1<<endl;
}

