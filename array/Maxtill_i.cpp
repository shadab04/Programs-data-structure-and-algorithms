#include<iostream>
using namespace std;

int main()
{
    int mx=-199999;
    int n;
    cout << "Enter the random number:";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for(int i=0;i<n;i++)
    {
        mx=max(mx,array[i]);
        cout<<mx<<" ";
    }
    return 0;
}
