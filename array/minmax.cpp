#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int MaxNo = INT_MIN;
    int MinNO = INT_MAX;
    // for (int i = 0; i < n; i++)
    // {
    //     if (MaxNo < array[i])
    //     {
    //         MaxNo = array[i];
    //     }
    //     else if (MinNO > array[i])
    //     {
    //         MinNO = array[i];
    //     }
    // }
    // or
    for (int i = 0; i < n; i++)
    {
        MaxNo=max(MaxNo,array[i]);
        MinNO=min(MinNO,array[i]);
    }
    cout << MaxNo << " " << MinNO << endl;
    return 0;
}