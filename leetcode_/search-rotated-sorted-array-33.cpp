#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
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
const int M=1e5,M2=2e5,oo=1e9+7,mod=998244353;
ll ceil(ll a,ll b)
{
    return (a+b-1)/b;
}
void solve()
{ 
    vector<int>nums={3,1};
     int target=1;
       vector<int>nums1;
        vector<int>nums2;
        int N=nums.size();
        int j=0;
        nums1.push_back(nums[0]);
        for(int i=1; i<N; i++)
        {
           j=i;
           if(nums[i]>nums[i-1])
           {
             nums1.push_back(nums[i]);
           }
           if(nums[i]<nums[i-1])
           {
             break;
           }  
        }
        while(j<N)
        {   
            nums2.push_back(nums[j]);   
            j++;
        }
        /*for(auto i:nums1)
        cout<<i<<" ";
        cout<<endl;
        for(auto i:nums2)
        cout<<i<<" ";
        cout<<endl;*/
        int N2=nums1.size(),N3=nums2.size();
        int l1=0,l2=0,h1=N2-1,h2=N3-1;
        while(l1<=h1)
        {
            int mid=(l1+h1)/2;
            if(nums1[mid]==target)
            {
                cout<<mid<<endl;
                return;
            }
            else if(nums1[mid]>target)
            {
                h1=mid-1;
            }
            else
            {
                l1=mid+1;
            }
        }
        while(l2<=h2)
        {
            int mid=(l2+h2)/2;
            if(nums2[mid]==target)
            {
                mid=N-N3+mid;
                cout<<mid<<endl;
                return;
            }
            else if(nums2[mid]>target)
            {
                h2=mid-1;
            }
            else
            {
                l2=mid+1;
            }
        }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   
    solve();
}
