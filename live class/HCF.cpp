// HCF of Two numbers
#include <iostream>
using namespace std;

int main()
{
    int HCF = 1;
    int num1, num2;
    cin >> num1 >> num2;
    int smaller_number;
    if (num1 < num2)
    {
        smaller_number = num1;
    }
    else
    {
        smaller_number = num2;
    }
    for (int i = 1; i <= smaller_number; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            HCF = i;
        }
        cout << "the hcf number "<<" "<<i << " is " << HCF << endl;
    }
    return 0;
}