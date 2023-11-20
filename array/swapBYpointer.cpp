#include<iostream>
using namespace std;
//call by reference
// void swap(int *a,int *b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
void increment(int *c)
{
    *c++;
}
//call by valu
// void swap(int a,int b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main()
// {
// int a=10,b=20;
// swap(a,b);
// cout<<a<<" "<<b<<endl;
// return 0;
// }
int main()
{
// int a=10,b=20;
// swap(&a,&b);
// cout<<a<<" "<<b<<endl;
int c=50;
increment(&c);
cout<<c<<endl;
return 0;
}