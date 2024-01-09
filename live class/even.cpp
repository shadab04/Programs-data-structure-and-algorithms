#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if ((i % 2 == 0) && (i % 7 == 0))
        {
            cout << i << " ";
            sum = sum + i;
        }
        if (sum > 200)
        {
            break;
        }
    }
    return 0;
}