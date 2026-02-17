#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string a;
    cin>>a;
    int m;
    cin>>m;
    string b,c;
    cin>>b>>c;
    string d = "", v="";
    for(int i=0; i<b.size(); i++)
    {
        if(c[i]=='D')
        {
            d+=b[i];
        }
        else if(c[i]=='V')
        {
            v+=b[i];
        }
    }   
    reverse(v.begin(),v.end());
    v+=a;
    v+=d;
    //cout<<d<<endl;
    cout<<v<<endl;
    //cout<<a<<endl;
}
}
