#include<iostream>
using namespace std;

int SetBit(int n,int position)
{
    return (n | (1<<position));
}
int main()
{
cout<<SetBit(5,1)<<endl;
return 0;
}