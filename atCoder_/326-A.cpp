#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    if(x<y) //up
    {
        if(y-x <= 2)
        cout<<"Yes";
        else
        cout<<"No" ;
    }
    else if(x>y) //down
    {
        if(x-y <= 3)
        cout<<"Yes";
        else
        cout<<"No";
    }
    
    return 0;
}
