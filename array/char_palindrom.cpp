#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of character:";
    cin >> n;
    char a[n + 1];
    cout << "Enter the charcter:";
    cin >> a;
    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "palindrom";
    }
    else
    {
        cout << "not palindrom";
    }
    return 0;
}