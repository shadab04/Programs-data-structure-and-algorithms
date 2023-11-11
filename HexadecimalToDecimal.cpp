// #include<iostream>
#include <bits/stdc++.h>
using namespace std;

int HexatoDecimal(string n)
{
    int decimal = 0;
    int weight = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            decimal += weight * (n[i] - '0');
        }
        else if(n[i]>='A'&&n[i]<='F')
            {
                decimal+= weight * (n[i] - 'A'+10);
            }
            weight*=16;
    }
    return decimal;
}
int main()
{
    string n;
    cin >> n;
    cout << HexatoDecimal(n) << endl;
    return 0;
}