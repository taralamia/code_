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
int solve(vector<long long int>& dp,int n)
{  
        int n;
        vector<long long int>dp(n+1,-1);
        if(n<=1)
        return 1;
        if(dp[n]!=-1)
        return dp[n];
        dp[n]=solve(dp,n-1)+solve(dp,n-2);
        return dp[n];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n=4;
    vector<long long int>dp(n+1,-1);
    int step=solve(dp,n);    
    cout<<step<<endl;

}
/*
=> dynamic programming easy problem solve
*/
