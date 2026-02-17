#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int >v1 = {-1,0,0,3,3,3,0,0,0};
    vector<int >v2 = {1,2,2};
    int j=0;
    int n =v2.size();
    for(int i=0; i<v1.size(); i++)
    {
        if(v1[i]==0 && j<n)
        {
            v1[i] = v2[j];
            j++;
        }
    }
    sort(v1.begin(),v1.end());
    for(auto x: v1)
    cout<<x<<" ";
}



