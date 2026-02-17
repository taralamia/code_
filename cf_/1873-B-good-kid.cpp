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
        int n,sum=1;
        cin>>n;
        vector<int>a;
        for(int i=0; i<n; i++)
        {
            int a1;
            cin>>a1;
            a.push_back(a1);
        }
        int m=*min_element(a.begin(),a.end());
        for(int i=0; i<n; i++)
        {
            if(a[i]==m)
            {
                a[i]=a[i]+1;
                break;
            }
        }
        for(int i=0; i<n; i++)
        {
            sum=sum*a[i];
        }
        cout<<sum<<endl;
    }
}



