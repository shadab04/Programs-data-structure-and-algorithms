#include<iostream>
using namespace std;

int unique(int a[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^a[i];
    }
    return xorsum;
}
int main()
{

int a[]={2,4,6,3,4,6,2};
cout<<unique(a,7);
return 0;
}