// //print diagonal elements
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int marks[3][3];
//     int count = 1;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             marks[i][j] = count;
//             count++;
//             // cin>>marks[i][j];
//         }
//     }
//     for (int j = 0; j < 3; j++)
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             cout << marks[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << "Left diagonal elements:" << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         cout << marks[i][i] << " ";
//     }
//     cout << endl;

//     cout << "Right diagonal elements:" << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         // i+j=n-1;
//         // int j=n-1-i;
//         int j = 3 - 1 - i;
//         cout << marks[j][i] << " ";
//     }
//     return 0;
// }

// Interchange diagonal elements
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks[4][4];
    int count = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            marks[i][j] = count;
            count++;
            // cin>>marks[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << marks[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        int j = 4 - 1 - i;
        swap(marks[i][i], marks[i][j]);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << marks[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}