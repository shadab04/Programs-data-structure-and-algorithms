#include <iostream>
using namespace std;

int BinarySearch(int array[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (array[mid] == key)
        {
            return mid;
        }
        else if (mid > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the random number:";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int key;
    cout << "Enter the key:";
    cin >> key;
    cout << BinarySearch(array, n, key);
    return 0;
}