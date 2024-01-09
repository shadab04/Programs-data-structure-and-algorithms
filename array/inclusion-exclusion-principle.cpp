#include<iostream>
using namespace std;

int inclusion(int n,int a,int b)
{
    int c1=n/5;
    int c2=n/7;
    int c3=n/(a*b);
    return c1+c2-c3;
}
int main()
{
int n,a,b;
cin>>n>>a>>b;
cout<<inclusion(n,a,b)<<" ";
return 0;
}