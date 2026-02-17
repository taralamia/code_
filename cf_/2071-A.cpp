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
    int cnt2,cnt3,cnt5,cnt1,cnt0;
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)
    {
       cin>>nums[i];
    }
    cnt0=count(nums.begin(),nums.end(),0);
    cnt1=count(nums.begin(),nums.end(),1);
    cnt2=count(nums.begin(),nums.end(),2);
    cnt3=count(nums.begin(),nums.end(),3);
    cnt5=count(nums.begin(),nums.end(),5);
    if(cnt0<3 || cnt1<1 || cnt2<2 || cnt3<1 || cnt5<1)
    {
         cout<<0<<endl;
         return;
    }
    int cnt=0;
    cnt0=3,cnt1=1,cnt2=2,cnt3=1,cnt5=1;
    for(int i=0; i<n; i++)
    {
       if(nums[i]==0)
       {
         cnt0--;
       }
       else if(nums[i]==1)
       {
         cnt1--;
       }
       else if(nums[i]==2)
       {
         cnt2--;
       }
       else if(nums[i]==3)
       {
         cnt3--;
       }
       else if(nums[i]==5)
       {
         cnt5--;
       }
       cnt++;
       if(cnt0<=0 && cnt1<=0 && cnt2<=0 && cnt3<=0 && cnt5<=0)
       {
         cout<<cnt<<endl;
         return;
       }
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
