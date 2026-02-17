#include<bits/stdc++.h>
using namespace std;
void reverseWords(string &str) {
   int end = str.size() - 1;
   int len = 0;
   string reverse="";
   while (end >= 0) {

        while (end >= 0 && str[end] == ' ') {
            end--;
        }

        if (end < 0) break;

    
        int start = end;
        while (start >= 0 && str[start] != ' ') {
            start--;
        }
        reverse += str.substr(start + 1, end - start);
        reverse += ' '; 

        end = start - 1;
    }
    if (!reverse.empty() && reverse.back() == ' ') {
        reverse.pop_back();
    }
   cout<<reverse<<endl;
}
int main()
{
    string s="the sky is blue";
    reverseWords(s);
    return 0;
   
}