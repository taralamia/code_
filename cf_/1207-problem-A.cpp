#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define vii vector<int>
#define vcc vector<char>
#define pll pair<long long, long long>
#define mem memset
#define sof sizeof
#define PB push_back
#define UB upper_bound
#define LB lower_bound
#define MP make_pair
#define TS to_string
#define F first
#define S second
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int bn,bf,ch;
        cin>> bn>> bf>> ch;
        int hbm,cbm;
        cin>> hbm>> cbm;
        int t1=0,t2=0,bn1=0;
        if(hbm>cbm && bn>=2)
        {
            bn = bn/2;
            bn1 = bn;
            if(bn<=bf)
            {
                t1 = hbm * bn;
            }
            else if(bn>bf)
            {
                t1 = hbm * bf;
                bn = bn1 - bf;
                if(bn>=ch)
                {
                    t2 = ch * cbm;
                }
                else
                {
                    t2 = cbm * bn;
                }
                t1 = t1 + t2;
            }
        }
        else if(cbm>hbm && bn>=2)
        {
            bn = bn/2;
            bn1 = bn;
            if(bn<=ch)
            {
                t1 = bn * cbm;
            }
            else if(bn>ch)
            {
                t1 = ch * cbm;
                bn = bn1 - ch;
                if(bn>=bf)
                {
                    t2 = bf * hbm;
                }
                else
                {
                    t2 = bn * hbm;
                }
                t1 = t1+t2;
            }
        }
        else if(hbm==cbm && bn>=2)
        {
            bn=bn/2;
            bn1 =bn;
            if(ch>=bf)
            {
                if(bn<=ch)
                {
                    t1 = cbm * bn;
                }
                else if(bn>ch)
                {
                    t1 = cbm * ch;
                    bn = bn1 - ch;
                    if(bn>=bf)
                    {
                        t2 = bf * hbm;
                    }
                    else
                    {
                       t2 = bn * hbm;
                    }
                    t1 = t1+t2;
                }
            }
            else
            {
                if(bn<=bf)
                {
                    t1 = bn * hbm;
                }
                else if(bn>bf)
                {
                    t1 = bf * hbm;
                    bn = bn1 - bf;
                    if(bn>=ch)
                    {
                        t2 = ch * cbm;
                    }
                    else
                    {
                        t2 = bn * cbm;
                    }
                    t1 = t1+t2;
                }
            }
        }
        cout<<t1<<endl;

    }
    return 0;
}


