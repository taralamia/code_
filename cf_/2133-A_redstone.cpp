#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int n;
     cin>>n;
     vector<int> a;
     for(int i=0; i<n; i++)
     {
        int temp;
        cin>>temp;
        a.push_back(temp);
     }
     unordered_map<int,int> freq;
     for(auto x: a)
     {
        freq[x]++;
     }
     int flag=0;
     for(auto p: freq)
     {
        flag=0;
        if(p.second>1)
        {
            cout<<"Yes\n";
            flag=1;
            break;
        }
     }
     if(flag==0)
     cout<<"No\n";
   }
     
}

