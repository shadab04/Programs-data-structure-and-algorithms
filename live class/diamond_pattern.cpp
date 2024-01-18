#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
    int stars=i*2-1;
    int spaces=n-i;
    for(int i=1;i<=spaces;i++)
    {
        cout<<" ";
    }
    for(int i=1;i<=stars;i++)
    {
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}