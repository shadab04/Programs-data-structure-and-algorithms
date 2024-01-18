#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (target == arr[i])
        {
            cout << "target is present in the array";
            flag = 1;
            break;
             
        }
    }
    if (flag == 0)
    {
        cout << "target not present in the array";
    }
    return 0;
}