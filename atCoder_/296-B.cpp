#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<vector<char>> vs;
    for(int i=0; i<8; i++)
    {
       vector<char> vch;
       for(int j=0; j<8; j++)
       {
          char ch;
          cin>>ch;
          vch.push_back(ch);
       }
       vs.push_back({vch});
    }
    for(int i=0; i<vs.size(); i++)
    {
       for(int j=0; j<vs.size(); j++)
       {
          if(vs[i][j] == '*')
          {
             int colindex = 7-i+1;
             char rowindex = char(97)+j; 
             //cout<<"i:: "<<i<<" "<<"j:: "<<j<<endl;
              cout<<rowindex;
              cout<<colindex;
              return 0;
          }
       } 
    }
}
