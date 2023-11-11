// #include<iostream>
// #include<climits>
// using namespace std;
// //using brute force approach
// int main()
// {
//  int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int maxSum=INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         for(int j=i;j<n;j++)
//         {
//             int sum=0;
//             for(int k=i;k<=j;k++)
//             {
//                 sum=sum+a[k];
//             }
//             maxSum=max(maxSum,sum);
//         }
//     }
//     cout<<maxSum<<endl;

// return 0;
// }

// #include<iostream>

// #include<climits>
// using namespace std;
// //using cumulative approach
// int maxsubarraySum(int a[],int n)
// {
// int cumsum[n];
// cumsum[0]=a[0];
// for(int i=1;i<n;i++)
// {
//     cumsum[i]=cumsum[i-1]+a[i];
// }
// int currsum=0;
// int maxsum=INT_MIN;
// for(int i=0;i<n;i++)
// {
//     for(int j=i;j<n;j++)
//     {
//         currsum=cumsum[j]-cumsum[i-1];
//     }
//     if(currsum>maxsum)
//     {
//         maxsum=currsum;
//     }
// }
// return maxsum;
// }
// int main()
// {
//  int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cout<<maxsubarraySum(a, n)<<endl;
// return 0;
// }

// #include <iostream>
// #include <climits>
// using namespace std;
// // using kadane's approach
// int kadanesSumbarraySum(int a[], int n)
// {
//     int flag = 0;
//     int max = INT32_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//         if (a[i] >= 0)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//     {
//         return max;
//     }
//     else
//     {
//         int cursum = 0;
//         int maxsum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cursum = cursum + a[i];
//             if (cursum < 0)
//             {
//                 cursum = 0;
//             }
//             if (cursum >= maxsum)
//             {
//                 maxsum = cursum;
//             }
//         }
//         return maxsum;
//     }
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
//     cout << kadanesSumbarraySum(a, n);
//     return 0;
// }
