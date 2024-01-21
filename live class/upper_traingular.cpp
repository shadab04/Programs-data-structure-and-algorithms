#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4][4] =
        {
            {3, 2, 4, 5},
            {0, 4, 9, 8},
            {0, 0, 1, 2},
            {0, 0, 0, 10}};
    int flag = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i > j)
            {
                if (arr[i][j] != 0)
                {
                   
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 0)
            break;
    }
    if (flag == 1)
    {
        cout << "yes this is upper traingular";
    }
    else
    {
        cout << "No upper taingular";
    }

    return 0;
}
        