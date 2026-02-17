#include<bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int>& v, int n)
{
    int flag=0,len=v.size();
    if(n==0)
        return false;
    for(int i=0; i<len && n!=0; i++)
    {
        if(i==0 && v[i]!=1 && v[i+1]!=1)

        {
            v[i]=1;
            n--;
        }

        if((i-1)!= -1 && (i+1)!=len)
        {

            if(v[i]!=1 && v[i+1]!=1 && v[i-1]!=1)
            {
                v[i]=1;
                n--;
            }
        }
        if(i==(len-1) && v[i]!=1 && v[i-1]!=1)
        {
            v[i]=1;
            n--;
        }

        //cout<<n<<endl;
    }
    if(n==0)
        return true;
    else
        return false;

}
int main()
{
    vector<int> v1= {0,0,1,0,1};
    int n=1;
    bool res=canPlaceFlowers(v1,n);
    cout<<res<<endl;
}



