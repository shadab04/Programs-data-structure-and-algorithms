#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d;
    // for (int i = 0; i < d.size(); i++)
    // {
    //     cout << d[i] << " ";
    // }
    d.push_front(1);
    d.push_back(4);
    d.push_back(5);
    d.push_front(3);
    for (int &d1 : d)
    {
        cout << d1 << " ";
    }
    cout << endl;
    cout << d.size() << endl;

    d.erase(d.begin(), d.begin() + 1);
    for (int &d1 : d)
    {
        cout << d1 << " ";
    }
    cout << endl;
    cout << "index Element->" << d.at(2);
    return 0;
}