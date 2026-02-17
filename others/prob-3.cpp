/*
 Needed to find the 2nd max element 
 of an array in one loop for one of the problems.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1={-7,12,17,29,41,56,79};
    vector<int>v2={-9,-3,0,5,19};
    int N=v1.size()+v2.size();
    int N1=v1.size(),N2=v2.size();
    vector<int>v3(N);
    int i=0,j=0,k=0;
    while(i<N1 && j<N2)
    {
        if(v1[i]<v2[j])
        {
            v3[k++]=v1[i++];
        }
        else
        {
            v3[k++]=v2[j++];
        }
    }
    while(i<N1)
    {
        v3[k++]=v1[i++];
    }
    while(j<N2)
    {
        v3[k++]=v2[j++];
    }
    for(auto x:v3)
    cout<<x<<" ";
}