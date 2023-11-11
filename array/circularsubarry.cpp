#include<iostream>
#include<climits>
using namespace std;

int kadanesSubarraySum(int a[],int n)
{
    int cursum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cursum=cursum+a[i];
        if(cursum<0)
        {
            cursum=0;
        }
        maxsum=max(maxsum,cursum);
    }
    return maxsum;
}

int main()
{
    int n;
    cout << "Enter the numbers:";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum=kadanesSubarraySum(a, n);

    int totalsum=0;
    for (int i = 0; i < n; i++)
    {
        totalsum+=a[i];
        a[i]=-a[i];
    }
    wrapsum=totalsum+kadanesSubarraySum(a,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;//for compare
    return 0;
}

 