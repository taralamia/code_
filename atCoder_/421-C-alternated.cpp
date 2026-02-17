#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define vii vector<int>
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
#define endl '\n'

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll N;
    cin>>N;
    string s;
    cin>>s;

    ll temp1=0,odd1=1;
    ll temp2=0,even1=0;
    for(int i=0; i<2*N; i++)
    {
        if(s[i]=='A')
        {
            temp1+=abs(odd1-i);
            odd1+=2;
        }
    }
    for(int i=0; i<2*N; i++)
    {
        if(s[i]=='A')
        {
            temp2+=abs(even1-i);;
            even1+=2;
        }
    }
    cout<<min(temp1,temp2)<<endl;
    return 0;
}


