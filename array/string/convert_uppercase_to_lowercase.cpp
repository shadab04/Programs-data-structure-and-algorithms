#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
      // cout<<'b'-'B'; //small a always greater than(size 32) capital A;
    string str = "KASHIDKHAN";
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    cout<<str;
    return 0;
}