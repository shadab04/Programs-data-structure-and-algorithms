#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
while (n>1)
{
    if(n%2==1)
    {
        cout<<"number is not power of 2";
        break;
    }
    n=n/2;
}
cout<<"number is power of 2";

return 0;
}