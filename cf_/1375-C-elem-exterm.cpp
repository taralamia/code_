#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> & removeVec(vector<ll>& v,ll pos)
{
    v.erase(v.begin()+pos);
    return v;
}
int main()
{
    ll i=0,j=i+1;
    ll t;
    cin>>t;
    while(t--){
    vector<ll> v;
        ll n;
        cin>>n;
        for(ll i=0; i<n; i++)
    {
      ll a;
      cin>>a;
      v.push_back(a);
    }
    while(!v.empty()){
        if(v.size()==2 && v[i]>v[j])
        {
            cout<<"No\n";
            break;
        }
        if(v.size()==2 && v[i]<v[j])
        {
            cout<<"Yes\n";
            break;
        }
        if(v[i]>v[j])
        {
            v=removeVec(v,j);
        }
        else if(v[i]<v[j])
        {
            v=removeVec(v,j);
        }
    }
     }

}
