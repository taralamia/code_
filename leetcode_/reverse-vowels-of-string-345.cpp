#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c)
{
    if(c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u')
        return true;
    else if(c == 'A' || c == 'E' || c =='I' || c == 'O' || c == 'U')
        return true;
        else
            return false;
}
string revString(string s)
{
    int n=s.size();
    int left=0,right = n;
    vector<int> rev;
    while(left<right)
    {
       if(isVowel(s[left]))
       {
           rev.push_back(left);
       }
       left++;
    }
   int start=0,endIndex = rev.size()-1;
   while(start<endIndex)
   {
       swap(s[rev[start]],s[rev[endIndex]]);
       start++;
       endIndex--;
   }
  //cout<<start<<" "<<endIndex<<endl;
    return s;
}
int main()
{
    string s = "IceCreAm";
    s = revString(s);
    cout<<s<<endl;

}


