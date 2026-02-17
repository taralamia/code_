#include <bits/stdc++.h>
using namespace std;
int main()
{
     int L,R;
     cin>>L >>R;
     string s;
     cin>>s;
     L=L-1;
     R=R-1;
     while(L<R)
     {
         swap(s[L],s[R]);
         L++;
         R--;
     }
     cout<<s<<endl;
}


