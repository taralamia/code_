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
       int x,y,n,ct=1;
       cin>>x >>y >>n;
       vector<int>a(n);
       a[0]=x;
       a[n-1]=y;
       for(int i=n-2; i>=1; i--)
       {
           a[i]=a[i+1]-ct;
           ct++;
       }
       if((a[1]-a[0]) > (a[2]-a[1]))
       {
           for(auto x: a)
            cout<<x<<" ";
            cout<<endl;
       }
       else
        cout<<-1<<endl;

    }
}
