/*Q-Get the 3rd bit(position=3) of a number n.(n=0101).
*/
// #include<iostream>
// using namespace std;

// int GetBit(int n,int position)
// {
//     return ((n&(1<<position))!=0);
// }
// int main()
// {
// cout<<GetBit(7,2)<<endl;
// return 0;
// }

#include<iostream>
using namespace std;

int main()
{
int n,postion;
cout<<"Enter the bit:"<<endl;
cin>>n;
cout<<"Enter the postion:"<<endl;
cin>>postion;
 
if((n&(1<<postion))!=0)
{
    cout<<"the bit non Zero (1))"<<endl;
}
else
{
    cout<<"the bit  Zero (0))"<<endl;
}
return 0;
}