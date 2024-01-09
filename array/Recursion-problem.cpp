// #include <iostream>
// using namespace std;

// int Sum(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     int prevSum = Sum(n - 1);
//     return n + prevSum;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout<<Sum(n)<<endl;
//     return 0;
// }

//n raised to power of p
#include<iostream>
using namespace std;

int Power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    int prevSum=Power(n,p-1);
    return n*prevSum;
}
int main()
{
int n,p;
cin>>n>>p;
cout<<Power(n,p)<<endl;
return 0;
}

