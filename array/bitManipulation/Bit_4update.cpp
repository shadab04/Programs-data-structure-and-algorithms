#include <iostream>
using namespace std;

int UpdateBit(int n, int position, int value)
{
    int BitMask = ~(1 << position);
    n = n & BitMask;
    return (n | (value << position));
}
int main()
{
    cout << UpdateBit(5, 2, 0);
    return 0;
}