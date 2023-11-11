#include<iostream>
using namespace std;

int OctaltoDecimal(int n)
{
    int decimal=0;
    int weight=1;
    while (n)
    {
        int rem=n%10;
        decimal +=rem*weight;
        weight*=8;
        n/=10;
    }
    return decimal;
}
int main()
{
int n;
cin>>n;
cout<<OctaltoDecimal(n)<<endl;
return 0;
}