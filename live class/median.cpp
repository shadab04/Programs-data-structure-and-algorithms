#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
if(n%2==1)
{
    cout<<arr[n/2];
}
return 0;
}