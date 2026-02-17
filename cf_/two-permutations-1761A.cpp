#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int valid = (n-(a+b));
        if(valid >= 2 || n==1)
        cout<<"Yes\n";
        else if(a==n && b==n)
        cout<<"Yes\n";
        else
        cout<<"No\n";

    }
    return 0;
}
