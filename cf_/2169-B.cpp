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
    string s;
    cin>>s;
    int n=s.size();
    bool b=false,b1=false,b2=false;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='>')
        {
            b=true;
        }
        if(b==true)
        {
            if(s[i]=='<')
            {
               b1=true;
               break;
            }
        }
    }
    for(int i=0; i<n-1; i++)
    {
       if(s[i]=='>' && s[i+1]=='*')
       {
          b2=true;
       }
       else if(s[i]=='*' && s[i+1]=='<')
       {
          b2=true;
       }
    }
    int cnt1=0;
    cnt1=count(s.begin(),s.end(),'*');
    if(cnt1>1 || b1==true || b2==true)
    {
        cout<<-1<<endl;
        return;
    }
    int cnt2=0,cnt3=0;
    cnt2=count(s.begin(),s.end(),'<');
    cnt3=count(s.begin(),s.end(),'>');
    if(cnt2>=cnt3)
    {
        cnt2+=cnt1;
        cout<<cnt2<<endl;
        return;
    }
    else
    {
       cnt3+=cnt1;
       cout<<cnt3<<endl;
       return;
    }
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
/*
Author- Tabassum Tara Lamia
*/
/*
< - 60 , pushed left
> - 62 , pushed right
<> => (60, 62) no infinite
>< => (62,60) infinite
*/

