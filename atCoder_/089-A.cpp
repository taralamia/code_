#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   if(n%3 == 0)
   cout<<n/3<<endl;
   else
   {
     while(true)
     {
        n = n - 1;
        if(n%3 ==0)
        {
            cout<<n/3<<endl;
            break;
        }
     }
   }
}
