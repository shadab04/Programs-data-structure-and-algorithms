#include <iostream>
using namespace std;

int setBit(int n, int position)
{
    return ((n & (1 << position)) != 0);
}
void unique(int a[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ a[i];
    }

    int tempxor = xorsum;
    int position = 0;
    int setbit = 0;
    while (setbit != 1)
    {
         
        setbit = xorsum & 1;
        position++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(a[i], position - 1))
        {
            newxor = newxor ^ a[i];
        }

    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
}
int main()
{
    int a[] = {2, 4, 6, 3, 4, 6, 2,9};
    unique(a, 8);
    return 0;
}