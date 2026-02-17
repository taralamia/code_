#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int > a;
        vector<int > b;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            b.push_back(temp);
        }
        int cnt =0;
        while(true)
        {
          bool dec=false,inc =false;
          for(int i=0; i<n; i++)
          {
              if(a[i]>b[i])
                dec=true;
          }
          for(int i=0; i<n; i++)
          {
              if(a[i]<b[i])
                inc=true;
          }
          cnt++;
          if(dec)
          {
              for(int i=0; i<n; i++)
              {
                  a[i]--;
                  break;
              }
          }
          if(inc)
          {
              for(int i=0; i<n; i++)
              {
                  a[i]++;
                  break;
              }
          }
          if(!dec)
            break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

