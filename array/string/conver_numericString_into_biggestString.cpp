#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s1 = "534267";
    sort(s1.begin(), s1.end(), less_equal<int>());
    cout << s1 << endl;
    sort(s1.begin(), s1.end(), greater<int>());
    cout << s1;
    return 0;
}