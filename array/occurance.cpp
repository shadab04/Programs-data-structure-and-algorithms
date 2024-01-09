// find first occurance and last occurance
#include <iostream>
using namespace std;

int firstocc(int a[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (a[i] == key)
    {
        return i;
    }
    return firstocc(a, n, i + 1, key);
}
int lastocc(int a[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    int restarray = lastocc(a, n, i + 1, key);
    if (restarray != -1)
    {
        return restarray;
    }
    if (a[i] == key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int a[] = {4, 2, 1, 2, 5, 2, 7};
    cout << firstocc(a, 7, 0, 2) << endl;
    cout << lastocc(a, 7, 0, 2) << endl;
    return 0;
}