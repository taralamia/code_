#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isSubsequence(string s, string t)
{
    char a;
    if(t.size()>0)
    {
        a=t[0];
    }
    vector<int> index;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==a)
        {
            index.push_back(i);
            break;
        }

    }
    int start=1,t1=0;
    int len=t.size()-1,flag=0;
    while(t1<s.size())
    {

        if(s[t1]==t[start])
        {
            if(index[start-1]<t1)
            {
                index.push_back(t1);
                start++;
            }

        }
        if(start > len)
        {
            break;
        }

        t1++;
    }
    for(auto x: index)
        cout<<x<<" ";
    if(index.size() == t.size())
        return true;
    else
        return false;
}
int main()
{
    string s ="baab", t="ab";
    bool b;
    b=isSubsequence(s,t);
    //cout<<b<<endl;
    return 0;
}

