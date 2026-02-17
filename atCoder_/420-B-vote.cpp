#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    vector<vector<char>> s(N,vector<char>(M));
    for(int i=0; i<N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> s[i][j];
        }
    }

    vector<int>vote (N,0);
    vector<vector<char>> ts(M,vector<char>(N));
     for(int i=0; i<s.size(); i++)
     {
         for(int j=0; j<s[i].size(); j++)
         {
            ts[j][i]=s[i][j];
         }
     }
     int cnt1=0,cnt0=0;
     int ct = ts[0].size();
      for(int i=0; i<ts.size(); i++)
     {
         vector<int> index;
         vector<int> index1;
         for(int j=0; j<ts[i].size(); j++)
         {
             if(ts[i][j]=='1')
             {
                 cnt1++;
                 index.push_back(j);
             }
             else if(ts[i][j]=='0')
             {
                 cnt0++;
                 index1.push_back(j);
             }
         }
         if(cnt0<cnt1)
         {
             for(int i=0; i<index1.size(); i++)
             {
                 vote[index1[i]]+=1;
             }
         }
         if(cnt1<cnt0)
         {
             for(int i=0; i<index.size(); i++)
             {
                 vote[index[i]]+=1;
             }
         }
         if(cnt1 ==ct || cnt0 ==ct)
         {
             for(int i=0; i<ts[0].size(); i++)
             {
                 vote[i]+=1;
             }
         }
         cnt0=0,cnt1=0;
     }
     int max_v=INT_MIN;

     for(int i=0; i<vote.size(); i++)
     {
         max_v=max(max_v,vote[i]);
     }
      for(int i=0; i<vote.size(); i++)
     {
         if(vote[i]== max_v)
            cout<<i+1<<endl;
     }

}

