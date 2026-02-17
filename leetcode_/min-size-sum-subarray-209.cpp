#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int > v = {5,1,3,5,10,7,4,9,2,8};
    int target = 15,start=0,last=0,sum=0,small=0,flag=0;
    for(int i=0; i<v.size(); i++)
    {
        if(sum < target)
        {
            sum+=v[i];
            small++;
        }
        if(sum>=target)
        {
            last = i;
            break;
        }
    }
    int finalMin=0;
    if(sum>= target)
    {
        finalMin=small;
        while(start<v.size())
        {
            if(last<v.size()-1)
            {
                last = last + 1;
                sum+=v[last]-v[start];
                start++;
                if(sum>=target)
                {
                    int min1 = small;
                    small = last-start+1;
                    finalMin=min(min1,small);
                }
            }
            else
            {
                last = v.size()-1;
                sum= sum - v[start];
                start++;
                cout<<sum<<endl;
                if(sum>=target)
                {
                    int min1 = small;
                    small = last-start+1;
                    finalMin=min(min1,small);

                }

            }
        }
    }

//    if(finalMin!=0)
  //      cout<<finalMin<<endl;
   // else
     //   cout<<0<<endl;
}
