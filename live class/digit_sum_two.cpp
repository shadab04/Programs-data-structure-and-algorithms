// sum of digits of all numbers from L to R
#include <iostream>
using namespace std;

int main()
{
    // int L, R;
    // cin >> L >> R;

    // for (int i = L; i <= R; i++)
    // {
    //     int digit_sum = 0;
    //     for (int rem = i; rem > 0; rem /= 10)
    //     {
    //         digit_sum += (rem % 10);
    //     }
    //     cout <<"the number "<< i <<" is sum "<< digit_sum << endl;
    // }

    // int n;
    // cin>>n;
    // int digit_sum;
    // for(int i=1;i<=n;i++)
    // {
    //     int num;
    //     cin>>num;
    //     int digit_sum=0;
    //     for(int k=num;k>0;k=k/10)
    //     {
    //         digit_sum=digit_sum+(k%10);
    //     }
    //     cout<<"the number is "<<i<<" sum "<<digit_sum<<endl;
    // }
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        int digit_sum=0;
        for(int j=i;j>0;j/=10)
        {
            digit_sum+=(j%10);
        }
        if(digit_sum==k)
        {
            cout<<"The number is "<<i<<" sum of the digit is "<<k<<endl;
        }
    }
    return 0;
}