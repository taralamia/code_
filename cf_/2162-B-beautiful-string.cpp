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
bool palindrome(string s)
{
    string res=s;
    reverse(s.begin(),s.end());
    if(res==s)
    return true;
    else
    return false;
}
void solve()
{ 
    int N;
    cin>>N;
    string s;
    cin>>s;
    N=s.size();
   int f1=0;
   vector<int>idx;
   vector<int>idx1;
    for(int i=0; i<N; i++)
    {
       if(s[i]=='0' && f1==0)
       {
         idx.PB(i);
         int j=i+1;
         while(s[i]<=s[j] && j<N)
         {
            idx.PB(j);
            j++;
            i++;
            f1=1;
         }
        i=i+1;
       }
       idx1.PB(i);
    }
    /*for(auto i:idx)
    cout<<i<<" ";
    cout<<endl;
    for(auto i:idx1)
    cout<<i<<" ";*/
    int N1=idx1.size();
    int N2=idx.size();
    string res="";
    for(int i=0; i<N1; i++)
    {
       res+=s[idx1[i]];
    }
    if(palindrome(res))
    {
      cout<<idx.size()<<endl;  
      for(int i=0; i<N2; i++)
      {
        cout<<idx[i]+1<<" ";
      }
      cout<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
   // cout<<res<<endl;
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
