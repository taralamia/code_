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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;

    int j = s[2]-'0';
    int i = s[0]-'0';
    char ch;
    if(j<8)
    {
        j= j+1;
        cout<<i<<"-"<<j<<endl;
    }
    if(i<8 && j==8)
    {
        i=i+1;
        j=1;
       cout<<i<<"-"<<j<<endl;
    }
    if(i==8 && j==8)
    {
        //cout<<i<<"-"<<j<<endl;
    }
}


