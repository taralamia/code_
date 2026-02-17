#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i=0,flag=0;
        int len = n -1;
        if(n==1)
        {
            cout<<1;
        }
        while(len--)
        {

            cout<<2+i<<" ";
            i++;
            flag=1;
        }
        if(flag == 1 && n!=1)
        {
            cout<<1;
        }
        cout<<endl;
    }
}

