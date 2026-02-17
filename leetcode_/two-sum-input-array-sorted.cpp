#include<bits/stdc++.h>
using namespace std;
vector<int> binarySearch(vector<int>& v, int low, int high, int x,int i1)
{
    vector<int> res;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (v[mid] == x && mid != i1)
            {
                res.push_back(i1+1);
                res.push_back(mid+1);
                return res;
            }

        if (v[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return res;
}
int main()
{
    vector<int > v = {0,0,3,4};
    int target = 0;
    int  r=v.size()-1;
    vector<int> res;
    vector<int> res1;
    for(int i=0; i<v.size(); i++)
    {
       if(target>= v[i] && target>=0)
       {
           int temp = target -v[i];
           res = binarySearch(v,0,r,temp,i);
           if(res.size()>1)
            break;
       }
       else if(target <= v[i] && target <=0)
       {
           int temp = target -v[i];
           res = binarySearch(v,0,r,temp,i);
       }
    }
    sort(res.begin(),res.end());
    for(auto x: res)
       cout<<x<<" ";
}



