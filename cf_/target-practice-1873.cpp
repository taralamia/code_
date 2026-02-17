#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t;
    while(t--){
    vector<vector<char>> vs;
    for(int i=0; i<10; i++)
    {
       vector<char> vch;
       for(int j=0; j<10; j++)
       {
          char ch;
          cin>>ch;
          vch.push_back(ch);
       }
       vs.push_back({vch});
    }
    vector<pair<int,int>>p1;
    for(int i=0; i<vs.size(); i++)
    {
        for(int j=0; j<vs.size(); j++)
        {
            if(vs[i][j] == 'X')
            {
                p1.push_back(make_pair(i,j));
            }
        }
    }
    int cnt =0;
    for(auto x: p1)
    {
        if(x.first == 0 || x.second == 9 || x.first == 9 || x.second == 0)
        {
            cnt++;
        }
        else if(x.first == 1 || x.second == 8 || x.first == 8 || x.second == 1)
        {
            cnt+=2;
        }
        else if(x.first == 2 || x.second == 7 || x.first == 7 || x.second == 2)
        {
            cnt+=3;
        }
        else if(x.first == 3 || x.second == 6 || x.first == 6 || x.second == 3)
        {
            cnt+=4;
        }
        else if(x.first == 4 || x.second == 5 || x.first == 5 || x.second == 4)
        {
            cnt+=5;
        }   
    }
    cout<<cnt<<endl;
}
}

