#include<bits/stdc++.h>
using namespace std;
void bobBon(int n,int m,int l,int r){
    //int n=4,m=2,l=-2,r=2;
    int len=m+1;
    for(int start=l; len+start-1<=r;start++)
    {
        int end = start + len - 1;
        cout<<start<<" "<<end<<endl;
        break;
    }    
}
int main()
{
    int t;
    cin>>t;
  while(t--)
  {
    int n,m,l,r;
    cin>>n>>m>>l>>r;
    bobBon(n,m,l,r);
  }
   
}