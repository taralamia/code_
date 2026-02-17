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
    int n;
    cin>>n;
    vector<string> s;
    for(int i=0; i<n; i++)
    {
        string s1;
        cin>>s1;
        s.PB(s1);
    }
    int X,flag=0;
    cin>>X;
    string Y;
    cin>>Y;
    for(int i=0; i<s.size(); i++)
    {
        int temp = X-1;
        flag=0;
        if(i== temp && s[i]==Y)
        {
            cout<<"Yes\n";
            flag=1;
            break;
        }
    }
    if(flag==0)
       cout<<"No\n";
}
