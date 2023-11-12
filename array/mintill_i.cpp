#include <iostream>
#include<climits>
using namespace std;
//for minimum value
int main()
{
    int n;
    int minNo =INT_MAX;
    cout << "Enter the number:";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>> a[i];
    }
    for(int i=0;i<n;i++)
    {
        minNo=min(minNo,a[i]);
        cout<<minNo<<" ";
    }
     
    return 0;
}