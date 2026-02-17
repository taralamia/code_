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
const int M=1e5,M2=2e5,oo=1e9+7,mod=998244353;
ll ceil(ll a,ll b)
{
    return (a+b-1)/b;
}
void solve()
{ 
    ll pr,pl,mx;//paper_space, plastic_space, mixed_space
    cin>>pr>>pl>>mx;
    ll pr_i,pl_i,mx_i,p_pr,p_pl;
    cin>>pr_i>>pl_i>>mx_i>>p_pr>>p_pl;//5 items
    int use=0;
    ll pr_s=0,pl_s=0,mx_s=0;
    
       pr_s=pr-pr_i; //updated paper space after allocating 1st item
       pl_s=pl-pl_i;//updated plastic space after allocating 2nd item
       mx_s=mx-mx_i;//updated mixed space after allocating 3rd item
    
    if(pr_s<0 || pl_s<0 || mx_s<0)
    {
        cout<<"NO\n";
        return;
    }
    
       use = min(pr_s,p_pr);
       p_pr=p_pr-use;
       pr_s=pr_s-use;

       use = min(mx_s,p_pr);
       p_pr=p_pr-use;
       mx_s=mx_s-use;
       if(p_pr>0)
       {
        cout<<"NO\n";
        return;
       }
    
       use=min(p_pl,pl_s);
       p_pl=p_pl-use;
       pl_s=pl_s-use;

       use=min(p_pl,mx_s);
       p_pl=p_pl-use;
       mx_s=mx_s-use;
       if(p_pl>0)
       {
        cout<<"NO\n";
        return;
       }
    
   cout<<"YES\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}


