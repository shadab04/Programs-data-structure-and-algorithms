#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            cout << "FizzBuzz";
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz";
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz";
        }
        else
        {
            cout << i<<" ";
            sum=sum+i;
            cout<<sum;
        }
        cout << endl;
        if(sum>2*n){
            break;
        }
    }
    return 0;
}