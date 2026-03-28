#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define vcc vector<char>
#define pll pair<long long, long long>
#define mem memset
#define sof sizeof
#define PB push_back
#define UB upper_bound
#define LB 
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
    vector<vector<int>> mat{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 23;
    
    int m = mat.size();        
    int n = mat[0].size();     
    
    int l = 0;
    int r = m * n - 1;          
    bool found = false;
    
    while(l <= r)
    {
        int mid = l + (r - l) / 2; 
        int midVal = mat[mid / n][mid % n];
        
        if(midVal == target)
        {
            cout << "Found\n";
            found = true;
            break;
        }
        else if(midVal < target)    
        {
            l = mid + 1;
        }
        else                        
        {
            r = mid - 1;
        }
    }
    
    if(!found)
    {
        cout << "Not Found\n";
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
        
    return 0;
}
/*
Author- Tabassum Tara Lamia
*/
/*
the main optimization happened when we flatten the 2d to 1d matrix. 
suppose a value 23 from 2d matrix is given but we don't it's coordinates.
the question is how to find the coordinates? 
simple => row=value/col, col=value%col.
<---- Reverse situation ---->
we know the coordinates (2,1) but we don't know the value of this position.
for 3x4 matrix, and (2,1) coordinate the position is,
position= (2*4)+1= 9th index

*/