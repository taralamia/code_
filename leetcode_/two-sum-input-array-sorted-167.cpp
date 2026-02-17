#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int > v = {1,2,3,4,4,9,56,90};
    int target = 8;
    int l=0;
    int  r=v.size()-1;
    vector<int> res;
    while(l<r)
    {
        int sum = v[l]+v[r];
        if(sum == target)
        {
            res.push_back(l+1);
            res.push_back(r+1);
            break;
        }
        else if(sum < target)
            l++;
        else if(sum > target)
            r--;
    }

    for(auto x: res)
       cout<<x<<" ";
}



