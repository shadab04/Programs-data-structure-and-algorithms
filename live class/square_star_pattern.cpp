#include<iostream>
using namespace std;

int main()
{
    // int n;
    // cin>>n;
// for(int i=1;i<=n;i++)
// {
//     for(int k=1;k<=n;k++)
//     {
//     cout<<"*";
//     }
//     cout<<endl;
// }
// print right traingle 
// for(int i=1;i<=n;i++)
// {
//     for(int k=1;k<=i;k++)
//     {
//     cout<<"*";
//     }
//     cout<<endl;
// }

// int m;
// cin>>m;
// for(int i=1;i<=n;i++)
// {
//     for(int k=1;k<=m;k++)
//     {
//         if(i%2==1)
//         {
//             cout<<"1";
//         }
//         else{
//             cout<<"0";
//         }
     
//     }
//     cout<<endl;
// }
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
    int space=i-1;
    int star_count=n;
    for(int j=1;j<=space;j++)
    {
        cout<<" ";
    }
    for(int k=1;k<=star_count;k++)
    {
    cout<<"*";
    }
    cout<<endl;
}
return 0;
}