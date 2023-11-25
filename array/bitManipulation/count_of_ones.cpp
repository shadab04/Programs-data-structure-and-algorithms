#include<iostream>
using namespace std;

int countOfOnes(int n)
{
    int count=0;
    while (n)
    {
        n=(n&n-1);
        count++;

    }
    return count;
    
}
int main()
{
cout<<countOfOnes(4);
return 0;
}