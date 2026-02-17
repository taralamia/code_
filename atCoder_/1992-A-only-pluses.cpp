#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define vec vector<int>
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
int fun1(int a,int b, int c)
{
    a+=2;
    b+=2;
    c+=1;
    return a*b*c;
}
int fun2(int a,int b,int c)
{
    a+=3;
    b+=2;
    return a*b*c;
}
int fun3(int a,int b,int c)
{
    a+=5;
    return a*b*c;
}
int fun4(int a,int b,int c)
{
    a+=3;
    b+=1;
    c+=1;
    return a*b*c;
}
int fun5(int a,int b,int c)
{
    a+=4;
    b+=1;
    return a*b*c;
}
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int prod=INT_MIN;
        if(a>=b)
        {
            swap(a,b);
            if(b>=c)
            {
                swap(b,c);
            }
            if(a>=b)
            {
                swap(a,b);
            }
        }
        if(a>=c)
        {
            swap(a,c);
            if(b>=c)
            {
                swap(b,c);
            }
        }
        if(b>=c)
        {
            swap(b,c);
        }

        //cout<<a<<" "<<b<<" "<<c;
        //cout<<fun1(a,b,c)<<endl;
        //cout<<fun2(a,b,c)<<endl;
        //cout<<fun3(a,b,c)<<endl;
        prod=max(fun1(a,b,c),fun2(a,b,c));
        prod=max(prod,fun3(a,b,c));
        prod=max(prod,fun4(a,b,c));
        prod=max(prod,fun5(a,b,c));
        cout<<prod<<endl;

    }


}
/*
a=b, b=c, c=a
*/
