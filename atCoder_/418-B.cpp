#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    priority_queue<int> p;
    while(q--)
    {
        int x,x1,x2;
        cin>>x;
        if(x == 1)
        {
            cin>>x2;
            x2 = x2 * (-1);
            p.push(x2);
        }
        else if(x ==2)
        {
            cout<<p.top()*(-1)<<endl;
            p.pop();

        }
    }

    return 0;
}
