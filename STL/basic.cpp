#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vector1;
    // cout<<vector1.size()<<endl;

    vector1.push_back(1);
    cout << "after push_back->" << vector1.capacity() << endl;
    vector1.push_back(2);
    cout << "after push_back->" << vector1.capacity() << endl;
    vector1.push_back(3);
    cout << "after push_back->" << vector1.capacity() << endl;
    cout << vector1.capacity() << endl;
     cout<<"2nd index at value->"<<vector1.at(2);
    
    // for (int vector: vector1)
    // {
    // cout << vector<<" ";
    // }
    return 0;
}