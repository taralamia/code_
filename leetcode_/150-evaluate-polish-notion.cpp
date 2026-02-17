#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
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
using namespace std;
const int M=1e5,M2=2e5,oo=1e9+7,mod=998244353;
ll ceil(ll a,ll b)
{
    return (a+b-1)/b;
}
void solve()
{ 
    vector<string>tokens={"4","13","5","/","+"};
    stack<string>st;
    int n=tokens.size();
    for(int i=0; i<n; i++)
    {
         string a,b;
         int num1,num2;
         string num3;
        if(tokens[i]=="+")
        {
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            num1=stoi(a);
            num2=stoi(b);
            num1+=num2;
            num3=to_string(num1);
            st.push(num3);
        }
        else if(tokens[i]=="-")
        {
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            num1=stoi(a);
            num2=stoi(b);
            num2-=num1;
            num3=to_string(num2);
            st.push(num3); 
        }
        else if(tokens[i]=="*")
        {
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            num1=stoi(a);
            num2=stoi(b);
            num1*=num2;
            num3=to_string(num1);
            st.push(num3);
        }
        else if(tokens[i]=="/")
        {
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            num1=stoi(a);
            num2=stoi(b);
            num2/=num1;
            num3=to_string(num2);
            st.push(num3);
        }
        else
        {
            st.push(tokens[i]);
        }
    }
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    
}  
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}
/*
Author- Tabassum Tara Lamia
*/
