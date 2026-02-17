#include<bits/stdc++.h>
using namespace std;
string trippi_troppi(string s1,string s2, string s3){
    string res ="";
    res+=s1[0];
    res+=s2[0];
    res+=s3[0];
    return res;
}
int main()
{
    int t;
  cin>>t;
  while(t--)
  {
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string res = trippi_troppi(s1,s2,s3);
    cout<<res<<endl;
  }
   
}