#include <iostream>
using namespace std;

int LinerSearch(int array[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            return i;
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
cout << LinerSearch(array,n, key);
    return 0;
}