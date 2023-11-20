#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string x = "axfzy";
    sort(x.begin() , x.end());
    cout << x;
    return 0;
}