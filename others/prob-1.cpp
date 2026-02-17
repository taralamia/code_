/*
write a function two check the given input is palindrome or not. 
Input is a number and you can't convert number to string.
*/
#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int num=232;
   int num1=232;
   int rem=0,rev=0;
   while(num!=0)
   {
     rem=num%10;
     rev=rem+rev*10;
     num=num/10;
   }
   if(num1==rev)
   cout<<"YES\n";
   else
   cout<<"NO\n";
}
int main()
{
  solve();
}