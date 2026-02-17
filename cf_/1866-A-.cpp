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
    int N;
    cin>>N;
    vector<int>a;
    vector<int>neg;
    vector<int>pos;
    for(int i=0; i<N; i++)
    {
       int temp; 
       cin>>temp;
       a.PB(temp);
       if(temp<0)
       {
         neg.PB(temp);
       }
       else
       {
        pos.PB(temp);
       }
    }
    int cntZero=count(a.begin(),a.end(),0);
    if(cntZero>=1)
    {
        cout<<0<<endl;
        return;
    }
    int min1=0,min2=0;
    int flag=0,flag1=0,flag2=0;
    sort(a.begin(),a.end());
    for(int i=0; i<N; i++)
    {
        if(a[i]>0)
        {
           min1=a[i];
           int j=i-1;
           flag1=1;
           if(j!=-1 && a[j]<0)
           {
             min2=a[j]*(-1);
             flag=1;
           }
           break;
        }
        else
        {
            min2=a[i]*(-1);
            flag2=1;
        }
    }
    if(flag==1)
    {
        if(min1<min2)
        {
            cout<<min1<<endl;
        }
        else
        {
            cout<<min2<<endl;
        }
    }
    else if(flag1==1)
    {
       cout<<min1<<endl;
    }
    else if(flag2==1)
    {
        cout<<min2<<endl;
    }
}  
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
