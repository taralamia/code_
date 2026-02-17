#include<bits/stdc++.h>
using namespace std;
/*
7 1 3
atcoder

*/
string substring(string s,int n1,int n2,int n3)
{
    string res=s.substr(n2,n1-n2-n3);
    return res;
    
}
int main()
{
   string s="abc";
   int n1 =3,n2=1,n3=0;
   string r=substring(s,n1,n2,n3);
   cout<<r<<endl;
}