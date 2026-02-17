#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int > v = {5,1,3,5,10,7,4,9,2,8};
    int target = 15;
    int finalMin= INT_MAX,start =0,sum=0;
    for(int i=0; i<v.size(); i++)
    {
        sum+=v[i];
        while(sum>=target)
        {
            finalMin=min(i-start+1,finalMin);
            sum-=v[start];
            start++;
        }
    }N
    if(finalMin != INT_MAX)
        cout<<finalMin<<endl;
    else
        cout<<0<<endl;
}


