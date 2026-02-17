#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
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
const int M=1e5,M2=2e5,oo=1e9+7,mod=998244353;
ll ceil(ll a,ll b)
{
    return (a+b-1)/b;
}
void solve()
{
    int n,k,x;
    cin>>n>>k>>x;
    vector<int>a;
    if(x==1 && k==1)
    {
        cout<<"NO\n";
        return;
    }
    else if(x==1 && k==2 && n%2==1)
    {
        cout<<"NO\n";
    }
    else if(x!=1)
    {
        cout<<"YES\n";
        int temp=0;
        while(temp!=n)
        {
          temp+=1;
          a.PB(1);
        }
    }
    else if(n%2==0 && x!=2)
    {
       cout<<"YES\n";
       int temp=0;
       while(temp!=n)
       {
         temp+=2;
         a.PB(2);
       }
    }
    else
    {
       cout<<"YES\n";
       int temp=3;
       a.PB(temp);
       while(temp!=n)
       {
        temp+=2;
        a.PB(2);
       }
    }
    if(!a.empty())
    {
        int N=a.size();
        cout<<N<<endl;
        for(int i=0; i<N; i++)
        {
cout<<a[i]<<" ";
        }
        cout<<endl;
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
