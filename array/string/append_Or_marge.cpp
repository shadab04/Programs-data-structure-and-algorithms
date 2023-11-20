#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1="fam";
    string str2="ily";
    getline(cin,str1);
    getline(cin,str2);
    cout<<str1+str2<<endl;
    return 0;
}