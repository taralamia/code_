#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,A,yen;
    cin>>N>>A;
    int N1 = N;
    if(N < A && A!=0)
    cout<<"Yes";
    else
    {
        yen = N % 500;
        N = N/500;
        if(yen == 0)
        cout<<"Yes";
        else if(yen != 0 && A != 0)
        {
            yen = 500 * N + yen;
            if(yen>= N1)
            cout<<"Yes";
            else
            cout<<"No";
        }
        else
        cout<<"No";
    }
}
