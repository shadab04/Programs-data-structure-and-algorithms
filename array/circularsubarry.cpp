// #include<iostream>
// #include<climits>
// using namespace std;

// int kadanesSubarraySum(int a[],int n)
// {
//     int cursum=0;
//     int maxsum=INT32_MAX;
//     for(int i=0;i<n;i++)
//     {
//         cursum=cursum+a[i];
//         if(cursum<0)
//         {
//             cursum=0;
//         }
//         maxsum=max(maxsum,cursum);
//     }
//     return maxsum;
// }

// int main()
// {
//     int n;
//     cout << "Enter the numbers:";
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int wrapsum;
//     int nonwrapsum;

//     nonwrapsum=kadanesSubarraySum(a, n);

//     int totalsum=0;
//     for (int i = 0; i < n; i++)
//     {
//         totalsum+=a[i];
//         a[i]=-a[i];
//     }
//     wrapsum=totalsum+kadanesSubarraySum(a,n);
//     cout<<max(wrapsum,nonwrapsum)<<endl;//for compare
//     return 0;
// }

// #include<iostream>
// #include<climits>
// int kadane(int arr[], int size) {
//     int maxSoFar = arr[0];
//     int maxEndingHere = arr[0];

//     for (int i = 1; i < size; i++) {
//         maxEndingHere = std::max(arr[i], maxEndingHere + arr[i]);
//         maxSoFar = std::max(maxSoFar, maxEndingHere);
//     }

//     return maxSoFar;
// }

// int maxCircularSubarraySum(int arr[], int size) {
//     int maxKadane = kadane(arr, size);

//     int maxWrap = 0;
//     for (int i = 0; i < size; i++) {
//         maxWrap += arr[i];
//         arr[i] = -arr[i];
//     }

//     maxWrap = maxWrap + kadane(arr, size);

//     return std::max(maxKadane, maxWrap);
// }

// int main() {
//     int arr[] = { 4, -4, 6, -6, 10,-11,12 };
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int maxSum = maxCircularSubarraySum(arr, size);

//     std::cout << "Maximum circular subarray sum: " << maxSum << std::endl;

//     return 0;
// }
#include <iostream>
#include <climits>
using namespace std;

int kadanesSubarraySum(int a[], int n) {
    // Your existing implementation of Kadane's algorithm
    // ...

    // This function returns the maximum subarray sum using Kadane's algorithm
}

int main() {
    // Declare and initialize the array 'a' and its size 'n'
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int wrapsum;
    int nonwrapsum;
    nonwrapsum = kadanesSubarraySum(a, n);

    int totalsum = 0;
    for (int i = 0; i < n; i++) {
        totalsum += a[i];
        a[i] = -a[i];
    }
    wrapsum = totalsum + kadanesSubarraySum(a, n);

    cout << "Maximum Subarray Sum: " << max(wrapsum, nonwrapsum) << endl;

    return 0;
}
