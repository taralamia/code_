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
     string s="abcghilaklm";     
     unordered_set<char>charSet;
     int n=s.size();
     int j=0,m=0;
     for(int i=0; i<n; i++)
     {
        while(charSet.find(s[i])!=charSet.end())
        {
              charSet.erase(s[j]);
              j++;
        }
        charSet.insert(s[i]);
        m=max(i-j+1,m);
     }  
     cout<<m<<endl;
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
<-----Brute Force Approach----->
# two loops needed to generate each substring
# maintain a hashmap/vector to track any repeating character
pseudo code
for(int i=0; i<n; i++)
{
   int j=i;
   vector<int>v(26,0);
   for(;j<n; j++)
   {
      if(v[s[j]-'a']==1)
      break;
      len=max(len,j-i+1);
      v[s[j]-'a']=1;
   }
}
*/