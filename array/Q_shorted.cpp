//check number us shorted or not using recursion
#include <iostream>
using namespace std;
bool shorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    bool restarray = shorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restarray);
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 7};
    cout<<shorted(arr,6)<<endl;
    return 0;
}