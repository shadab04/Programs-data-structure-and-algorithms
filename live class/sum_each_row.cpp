#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4][3] = {{3, 5, 6},
                     {7, 2, 3},
                     {9, 7, 3},
                     {10,1,7}};
for(int i=0;i<4;i++)
{
    int sum=0;
    for(int j=0;j<3;j++)
    {
        sum+=arr[i][j];
    }
    cout<<sum<<endl;
}
    return 0;
}