#include <iostream>
using namespace std;

int binaryToDecimal(int n)
{
    int num = n;
    int decimal = 0;

    int weight = 1;

    int rem = num;
    while (rem)
    {
        int binary;
        int rem = rem % 10;
        decimal += rem * weight;
        rem = rem / 10;
        weight *= 2;
    }

    return decimal;
}

// Driver code
int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    cout << binaryToDecimal(num) << endl;
}
