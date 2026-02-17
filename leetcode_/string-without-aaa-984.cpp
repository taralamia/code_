#include<bits/stdc++.h>
using namespace std;
string without3a3b(int a, int b)
{
    string s="";
    while (a>0 && b>0)
    {
        if (a > b)
        {
            s += "aab";
            a-=2;
            b-=1;
        }
        else if (b > a)
        {
            s += "bba";
            b-=2;
            a-=1;

        }
        else
        {
            s += "ab";
            a--;
            b--;

        }
    }
    while (a--) s += "a";
    while (b--) s += "b";
    return s;
}
int main()
{
    int a=11,b=5;
    string s="";
    s= without3a3b(a,b);
    //cout<<s.size()<<endl;
    cout<<s<<endl;

}
