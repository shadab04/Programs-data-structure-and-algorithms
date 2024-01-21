//sum of each row
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int marks[3][3];
//     int counter=1;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             marks[i][j]=counter;
//             counter++;
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             sum += marks[i][j];
//             // cin>>marks[i][j];
//         }
//         cout << sum << " ";
//     }

//     return 0;
// }
////sum of each column
 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks[3][3];
    int counter=1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            marks[i][j]=counter;
            counter++;
        }
    }
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += marks[i][j];
            // cin>>marks[i][j];
        }
        cout << sum << " ";
    }

    return 0;
}

////print matrix collumn wise
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int marks[6][5];
//     int count=1;
//     for (int i = 0; i < 6; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             marks[i][j]=count;
//             count++;
//             // cin>>marks[i][j];
//         }

//     }
//       for (int j = 0; j < 5; j++)
//     {
//         for (int i = 0; i < 6; i++)
//         {
//             cout<<marks[i][j]<<" ";
//         }
//         cout<<endl;

//     }
//     return 0;
// }

//// print matrix row wise
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int marks[3][3];
//     int count=1;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             // cin>>marks[i][j];
//             marks[i][j]=count;
//             count++;
//         }
//     }
//     for (int i = 0; i < 3; i++)

//     {
//          for (int j = 0; j < 3; j++)
//         {
//             cout<<marks[i][j]<<" ";
//         }
//         cout<<endl;

//     }
//     return 0;
// }
 