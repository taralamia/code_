#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>> n>>x;
        vector<int> v;
        int maxVal=INT_MIN;
        for(int i=0; i<n; i++)
        {
           int temp;
           cin>>temp;
           v.push_back(temp);
        }
        int len = v.size()-1;
        int fuel= (x - v[len])*2;
        maxVal=max(fuel,maxVal);
        for(int i=0; i<n-1; i++)
        {
            int diff = abs(v[i]-v[i+1]);
            maxVal=max(maxVal,diff);
        }
        cout<<maxVal<<endl;
    }

    return 0;
}


