#include <bits/stdc++.h>
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
    int EvenNum[n];
    int OddNum[n];
    int j = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            EvenNum[j] = arr[i];
            j++;
        }
        else
        {
            OddNum[k] = arr[i];
            k++;
        }
    }
    for (int i = 0; i < j; i++)
    {
        cout << EvenNum[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < k; i++)
    {
        cout << OddNum[i] << " ";
    }
    return 0;
}