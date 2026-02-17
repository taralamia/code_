#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool increasingTriplet(vector<int>& nums)
{
    int len = nums.size()-1;
    int limit = len-2;
    int flag =0;
    for(int i=0; i<nums.size(); i++)
    {
        if(i>limit || (i+2)>len)
            break;
        else if((i<i+1 && (i+1)<(i+2)))
       {
        if(nums[i] < nums[i+1] && nums[i+1]<nums[i+2])
            {
                flag = 1;
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
    vector<int> v = {5,4,3,2,1};
    bool b = increasingTriplet(v);
    cout<<b<<endl;
    return 0;
}

