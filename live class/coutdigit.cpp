
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int count_digit = 0;
//     if(n==0)
//     {
//         cout<<1;
//     }
//     else{
//     for (int i = n; i > 0; i=i / 10)
//     {
//         count_digit++;
//     }
//     cout << count_digit;
//     }
//     return 0;
// }
// digit_sum

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int digit_sum = 0;
//     for (int i = n; i > 0; i = i / 10)
//     {
//         digit_sum++;

//     }
//     cout <<digit_sum;
//     return 0;
// }

// Print first n numbers that have digit sum equal to k
 #include <iostream>
using namespace std;

int main() {

    int n, k;
    cin>>n>>k;

    int count = 0;
    int number = 1;
    while(count < n) {
        int digit_sum = 0;
        for(int rem = number; rem > 0; rem /= 10) {
            digit_sum += rem %10;
        }

        if(digit_sum == k) {
            count++;
            cout<<number<<endl;
        }
        number++;
    }
    
    return 0;
}