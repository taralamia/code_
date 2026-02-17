//999999999999999999
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    long long int n = 1111;
    long long int temp=11;
    //long long int sqrtN= sqrt(n);
    vector <long long int> divisor;
    if(n % 11 == 0)
    {
      divisor.push_back(temp);
      for(int i=12; i<=n; i++)
      {
         if(n%i==0)
         {
            cout<<i<<endl;
           /* if(i%temp ==0)
            {
                divisor.push_back(i);
            }*/
         }
      }
    }
    //for(auto  &divs: divisor)
    //cout<<divs<<" ";
}
}
