#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the row and column:" << endl;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "The matrix is:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int x;
    cin >> x;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == x)
            {
                cout << i << " " << j << endl;
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "Element is found" << endl;
    }
    else
    {
        cout << "Element is not found" << endl;
    }
    return 0;
}