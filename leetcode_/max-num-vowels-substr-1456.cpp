#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c)
{
    if(c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u')
    return true;
    else
    return false;
}
int maxVowels(string s,int k)
{
    int ct1=0,ct2 = INT_MIN;
    for(int i=0; i<k; i++)
    {
       if(isVowel(s[i]))
        ct1++;
    }
    ct2=ct1;
    for(int i=k; i<s.size(); i++)
    {
        if(isVowel(s[i-k]))
            ct1--;
        if(isVowel(s[i]))
            ct1++;
        int ct2 = max(ct2,ct1);
    }
    if(ct2!=INT_MIN)
    return ct2;
    else
    return 0;
}
int main()
{
    string s = "a";
    int k = 1;
    int len = maxVowels(s,k);
    cout<<len<<endl;

}

