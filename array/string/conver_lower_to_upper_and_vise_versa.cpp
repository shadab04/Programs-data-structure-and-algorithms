#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    //lower to upper string using transform function 
    string str = "shadabkhan";
    transform(str.begin(),str.end(),str.begin(), :: toupper);
    cout<<str<<endl;

    //  upper to lower string using transform function 
    string s1="KASHIDKHAN";
    transform(s1.begin(),s1.end(),s1.begin(),:: tolower);
    cout<<s1;
    return 0;
}