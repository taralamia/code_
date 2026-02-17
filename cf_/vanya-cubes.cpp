#include<bits/stdc++.h>
using namespace std;
int  vanya(int n){
   int i = 1, sum = 0, level = 0;
while (true) {
    int x = (i * (i + 1)) / 2;
    if (sum + x > n)
        break;
    sum += x;
    level++;
    i++;
}
return level;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int res=vanya(n);
    cout<<res<<endl;
  }
   
}