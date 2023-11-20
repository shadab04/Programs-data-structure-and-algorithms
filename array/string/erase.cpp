#include<iostream>
#include<string>
using namespace std;

int main()
{
  string s1 = "shadabkhan";
  s1.erase(6,4);
  cout<<s1;
// Or  cout<<s1.erase(6,4);
return 0;
}