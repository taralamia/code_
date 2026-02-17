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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string st="";
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<i;j++)
            {
                st+='(';
            }
            for(int j=0; j<i;j++)
            {
                st+=')';
            }
            for(int j=0; j<n-i;j++)
            {
                st+='(';
            }
            for(int j=0; j<n-i;j++)
            {
                st+=')';
            }
            cout<<st<<endl;
            st="";
        }


    }
}
