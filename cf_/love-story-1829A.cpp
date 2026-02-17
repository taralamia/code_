#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s ="codeforces";
    int t;
    cin>>t;

    while(t--)
    {
        int cnt=0;
        string input;
        cin>>input;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!=input[i])
            {
                cnt++;
            }
        }
       cout<<cnt<<endl;
    }
    return 0;
}

