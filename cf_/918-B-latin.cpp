#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t;
    while(t--){
    vector<vector<char>> vs;
    for(int i=0; i<3; i++)
    {
       vector<char> vch;
       for(int j=0; j<3; j++)
       {
          char ch;
          cin>>ch;
          vch.push_back(ch);
       }
       vs.push_back({vch});
    }
    int index1 =0,index2=0;
    set<char > storeChar;
    for(int i=0; i<vs.size(); i++)   
    {                                 
       for(int j=0; j<vs.size(); j++)
       {
          if(vs[i][j] == '?')
          {
              index1 = i;
              index2 = j;
          }   
        }
    }
    if(index2 == 0)
    {
       storeChar.insert({vs[index1][index2+1]});
       storeChar.insert({vs[index1][index2+2]});
    }
    if(index2 == 1)
    {
       storeChar.insert({vs[index1][index2-1]});
       storeChar.insert({vs[index1][index2+1]});
    }
    if(index2 == 2)
    {
        storeChar.insert({vs[index1][index2-1]});
        storeChar.insert({vs[index1][index2-2]});
    }
   char ch1 = 'A';
   char ch2 = 'B';
   char ch3 = 'C';
   int f1=0;
   if(storeChar.find(ch1)!=storeChar.end())
   {
      f1+=1;
   }
   else
   {
    cout<<ch1<<endl;
   }
   if(storeChar.find(ch2)!=storeChar.end())
   {
      f1+=1;
   }
   else
   {
    cout<<ch2<<endl;
   }
   if(storeChar.find(ch3)!=storeChar.end())
   {
      f1+=1;
   }
   else
   {
    cout<<ch3<<endl;
   }
}
}

