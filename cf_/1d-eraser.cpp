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
bool freqB(char c)
{
    if(c =='B')
        return true;
    else
        return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,ct1=0,ct2=0;
        cin >>n>>k;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(freqB(s[i]))
            {
                ct1++;
                i=i+k-1;
            }
        }
        cout<<ct1<<endl;
    }
}

