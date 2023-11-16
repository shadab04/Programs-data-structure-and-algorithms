#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of char:";
    cin >> n;
    cin.ignore();

    char a[n + 1];
    cin.getline(a, n);
    cin.ignore();

    int curLen = 0, maxLen = 0;
    int i = 0;
    int maxst=0,st=0;
    while (1)
    {

        if (a[i] == ' ' || a[i] == '\0')
        {
            if (curLen > maxLen)
            {
                maxLen = curLen;
                maxst=st;
            }
            curLen = 0;
            st=i+1;
        }
        else
            curLen++;
        if (a[i] == '\0')
            break;
        i++;
    }
    cout << maxLen << " ";
    for(int i=0;i<maxst;i++)
    {
        cout<<a[i+maxst];
    }
    return 0;
}