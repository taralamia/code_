#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool increasingTriplet(vector<int>& nums)
{
    int len = nums.size()-1;
    int flag =0;
    vector<int> pos;
    map<int,int> map1;
    for(int i=0; i<nums.size(); i++)
    {
        map1.insert({nums[i],i});
    }
    for(auto x: map1)
    {
      pos.push_back(x.second);
    }
    for(int i=0; i<pos.size(); i++)
    {
       for(int j=i+1; j<pos.size(); j++)
       {
           if(j==len)
           break;
           else if(pos[i]<pos[j] && pos[j]<pos[j+1])
           {
               flag=1;
           }
       }

    }
    if(flag == 1)
        return true;
    else
        return false;
}
int main()
{
    vector<int> v = {2,1,5,0,4,6};
    bool b = increasingTriplet(v);
    cout<<b<<endl;
    return 0;
}

