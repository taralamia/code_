#include <bits/stdc++.h>
using namespace std;
bool frequencyCheck(string word1,string word2)
{
    map<char,int> map1;
    map<char,int> map2;
    for(auto x1: word1)
    {
        map1[x1]++;
    }
    for(auto x2: word2)
    {
        map2[x2]++;
    }
    vector<int > v1;
    vector<int > v2;
    for(auto &p1 : map1)
    {
        v1.push_back(p1.second);
    }
        for(auto &p2 : map2)
    {
        v2.push_back(p2.second);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    if(v1 == v2)
        return true;
    else
        return false;
}
bool characterCheck(string word1,string word2)
{
    set<char> set1;
    set<char> set2;
    int flag = 0;
    for(int i=0; i<word1.size(); i++)
    {
        char ch = word1[i];
        set1.insert(ch);
    }
    for(int i=0; i<word2.size(); i++)
    {
        char ch = word2[i];
        set2.insert(ch);
    }
    if(set1 == set2)
        return true;
    else
        return false;
}
int main()
{
    string s1 = "abbzzca", s2 = "babzzcz" ;
    bool b1 = frequencyCheck(s1,s2);
    bool b2 = characterCheck(s1,s2);
    if(b1 && b2)
        cout<<"True\n";
    else
        cout<<"False\n";

    return 0;
}
