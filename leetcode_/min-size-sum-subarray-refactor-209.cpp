#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int > v= {1,8,6,2,5,4,8,3,7};
    int a = INT_MIN, l=0,r = v.size()-1;
    while(l<r)
    {
        int m = min(v[l],v[r]);
        int a1 = m * (r-l);
        int area = max(a1,a);
        a = area;
        if(v[l] < v[r])
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    cout<<a<<endl;
}

