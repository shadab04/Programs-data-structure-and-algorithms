#include<iostream>
using namespace std;

int ClearBit(int n,int position)
{
    int BitMask=~(1<<position);
    return (n & BitMask);
}
int main()
{
cout<<ClearBit(5,3);
return 0;
}