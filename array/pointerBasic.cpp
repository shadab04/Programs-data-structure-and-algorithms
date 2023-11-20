#include<iostream>
using namespace std;

int main()
{
// int a=10;
// int *ptr=&a;
// cout<<*ptr<<endl;
// ptr++;
// cout<<*ptr;
int arr[]={10,20,30};
int *ptr=arr;
cout<<*ptr<<endl;
for(int i=0;i<3;i++)
{
    // cout<<*ptr<<" ";
    // ptr++;
    cout<<*(arr+i)<<endl;
}
return 0;
}