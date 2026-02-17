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
void solve()
{
      int k,x;
      cin>>k>>x;
      int i=0,x1=0;
      while(i<k)
      {
        x =x * 2;        
        i++;
      }  
    //x = (x-1)/3;
    cout<<x<<endl;    
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