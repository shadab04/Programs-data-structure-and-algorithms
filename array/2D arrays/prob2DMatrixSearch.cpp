#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the row and column:" << endl;
    cin >> n >> m;
    int target;
    cout << "Enter the target number:";
    cin >> target;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    bool flag = false;
    int r = 0, c = n - 1;
    while (r < n && c >= 0)
    {
        if (a[r][c] == target)
        {
            flag = true;
        }
        if (a[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
        if (flag)
        {
            cout << "Element found";
        }
        else
        {
            cout << "Element does not exist";
        }
    return 0;
}