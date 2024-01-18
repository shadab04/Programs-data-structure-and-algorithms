#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        cout << "This character is alphabate" << endl;
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "This character is digit";
    }
    else
    {
        cout << "this character is spacial character";
    }
    return 0;
}