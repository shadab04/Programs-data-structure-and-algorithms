// Write a C++ program to input a character from user and check whether given character is alphabet, digit or special character.

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << "This character is alphabate" << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "This character is digit";
    }
    else
    {
        cout << "this character is spacial character";
    }
    return 0;
}