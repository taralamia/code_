/*
 Needed to find the 2nd max element 
 of an array in one loop for one of the problems.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l1=-1,l2=-1;
    vector<int>v1={2,3,4,1,4,5,7};
    int N=v1.size();
    for(int i=0; i<N; i++)
    {
        if(v1[i]>l1)
        {
            l2=l1;
            l1=v1[i];
        }
        else if(v1[i]<l1 && v1[i]>l2)
        {
            l2=v1[i];
        }
    }
    cout<<l1<<" "<<l2<<endl;
}