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
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string a;
        cin>>a;
        string d;
        for(int i=0; i<n; i++)
        {
            d+='1';
        }
        if(n==1)
        {
            cout<<1<<endl;
        }
        if(n>1)
        {
            int a1 = a[0]-'0';
            int d1 = d[0]-'0';
            int st=d1+a1;
            //cout<<st<<endl;
            for(int i=1; i<n; i++)
            {
                int t1 = a[i]-'0';
                int t2 = d[i]-'0';
                int temp=t1+t2;
                if(temp==st)
                {
                    d[i]='0';
                    int st1=a[i]-'0';
                    int st2 = d[i]-'0';
                    st = st1+st2;
                }
                else
                {
                    st = temp;
                }
            }
              cout<<d<<endl;
        }
    }

    //cout<<ct<<endl;

}

