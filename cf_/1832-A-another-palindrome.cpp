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
   int N=s.size();
   if(N%2==0)
   {
      vector<int>freq1(26);
      vector<int>freq2(26);
      int N1=N/2;
      string s1=s.substr(0,N1);
      string s2=s.substr(N1,N);
      for(char c:s1)
      {
        freq1[c-'a']++;
      }
      for(char c:s2)
      {
        freq2[c-'a']++;
      }
      int cnt=0;
      for(int i=0; i<26; i++)
      {
        if(freq1[i]!=freq2[i])
        {
            cout<<"NO\n";
            return;
        }
        else if(freq1[i]!=0 && freq2[i]!=0)
        {
          cnt++;
        }
      }
      if(cnt>=2)
      cout<<"YES\n";
      else
      cout<<"NO\n";
   }
   else
   {
     int N1=N/2;
     string s1=s.substr(0,N1);
     string s2=s.substr(N1+1,N);
     vector<int>freq2(26);
     vector<int>freq3(26);
     for(char c:s1)
     {
        freq2[c-'a']++;
     }
     for(char c:s2)
     {
        freq3[c-'a']++;
     }
     int cnt=0;
     for(int i=0; i<26; i++)
     {
        if(freq2[i]!=freq3[i])
        {
            cout<<"NO\n";
            return;
        }
        else if(freq2[i]!=0 && freq3[i]!=0)
        {
           cnt++;
        }
     } 
     if(cnt>=2)
     cout<<"YES\n";   
     else
     cout<<"NO\n"; 
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
aaaaa
aabaa
aacaa
ababa
abbba
abcba
acaca
acbca
accca
 */