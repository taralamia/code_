#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void validation(int n,int l,int r,string s)
{
   l = l-1;
   r = r-1;
   int flag = 0;
   for(int i=l; i<=r; i++)
   {
       if(s[i]!='o'){
        flag=1;
       }
   }
   if(flag == 0)
    cout<<"Yes\n";
   else
    cout<<"No\n";
}
int main()
{
    int n,l,r;
    cin>>n>>l>>r;
    string s;
    cin>>s;
    validation(n,l,r,s);
    return 0;
}

