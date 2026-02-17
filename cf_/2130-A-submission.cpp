#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>> n;
        int ans=0;
        int one=0,zero=0;
        vector<int > v;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        for(int i=0; i<n; i++)
        {
            if(v[i] == 0){
                zero++;}
            else if(v[i] == 1){
                one++;}
            ans+=v[i];
        }
         ans=ans+min(zero,one)*2 - min(zero,one);
         if(zero>one)
         {
             ans=ans+one-zero;
         }
        cout<<ans<<endl;
    }

    return 0;
}

