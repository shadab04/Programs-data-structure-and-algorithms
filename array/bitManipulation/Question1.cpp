#include<iostream>
using namespace std;

int powerof2(int n)
{
    if(n==0)
    {
        return false;
    }
    if((n&n-1)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    cout<<powerof2(5);

return 0;
}