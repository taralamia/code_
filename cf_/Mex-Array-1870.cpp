#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--)
   {
      int n,k,x;
      int sum =0;
      cin>>n>>k>>x;
      if(n<k || x<(k-1))
        cout<<-1<<endl;
      else
      {
          int half1 = k-1;
           sum =(half1*(half1+1))/2;
          if(x!=k)
          {
             int half2 =  n-k;
             sum += half2 * x;
          }
          else
          {
              int half2 = n-k;
              x=x-1;
              sum+= half2* x;
          }
          cout<<sum<<endl;
      }
   }
}

