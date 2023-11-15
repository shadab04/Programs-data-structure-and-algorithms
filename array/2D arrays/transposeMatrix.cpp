#include <iostream>
using namespace std;

int main()
{
    int N = 3;
    int a[N][N] = {{2, 3, 4}, {6, 8, 9}, {6, 5, 1}};
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            // cin >> a[i][j];
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}