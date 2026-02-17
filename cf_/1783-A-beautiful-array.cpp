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
bool check(vector<int>& v)
{
    int a=0,f=0;
    for(int i=0; i<v.size()-1; i++)
    {
        a+=v[i];
        if(v[i+1]==a)
        {
            f=1;
        }
    }
    if(f==1)
        return false;
    else
        return true;
}
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
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            v.PB(val);
        }
        int big =INT_MIN, small=INT_MAX,index1=0,index2=0;
        bool a = check(v);
        int n1 = v.size();
        if(a)
        {
            cout<<"Yes\n";
            for(auto x: v)
                cout<<x<<" ";
            cout<<"\n";
        }
        else
        {
            for(int i=0; i<v.size(); i++)
            {
                if(big<v[i])
                {
                    big = v[i];
                    index1=i;

                }
            }
            for(int i=0; i<v.size(); i++)
            {
                if(small>v[i])
                {
                    small = v[i];
                    index2=i;

                }
            }
            int temp1 = v[index1];
            int temp2 = v[index2];
            v[0]=temp1;
            v[n1-1]=temp2;
            bool b = check(v);
            if(b)
            {
                cout<<"Yes\n";
                for(auto x: v)
                    cout<<x<<" ";
                cout<<endl;
            }
            else
            {
                cout<<"No\n";
            }
        }
    }
    return 0;
}
