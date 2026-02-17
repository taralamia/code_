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
   int N;
   cin>>N;
   vector<int> v(N);
   for(int i=0; i<N; i++)
   {
      cin>>v[i];
   }
   int sCnt=0,dCnt=0;
   int start=0,end=N-1;
   int turn=1;
   while(start<=N)
   {
     if(turn%2!=0)
     {
        if(v[start]>v[end])
        {
            sCnt+=v[start];
            start++;
        }
        else
        {
            sCnt+=v[end];
            end--;
        }
     }
     else
     {
        if(v[start]>v[end])
        {
            dCnt+=v[start];
            start++;
        }
        else
        {
            dCnt+=v[end];
            end--;
        }
     }
     turn++;
     if(start>end)
     break;
   }
   cout<<sCnt<<" "<<dCnt<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}


