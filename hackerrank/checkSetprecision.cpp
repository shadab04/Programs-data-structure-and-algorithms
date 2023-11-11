#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
double a=123.345678;
float b=1.23;
cout <<setprecision(5)<<fixed<<a<<endl;
cout <<setprecision(3)<<fixed<<b;
return 0;
}