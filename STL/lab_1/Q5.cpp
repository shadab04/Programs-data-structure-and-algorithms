#include <bits/stdc++.h>
using namespace std;

int main()
{
    //insertion
    vector<int> vec1 = {5, 4, 3, 2, 5, 6};
    for (int &vec : vec1)
    {
        cout << vec << " ";
    }
    cout << endl;
    vec1.insert(vec1.begin() + 4, 1);
    for (int &vec : vec1)
    {
        cout << vec << " ";
    }
    cout << endl;
    vec1.push_back(9);
    for (int &vec : vec1)
    {
        cout << vec << " ";
    }
    cout<<endl;
    //deletion at specific location
      vec1.erase(vec1.begin() +5);
      for (int &vec : vec1)
    {
        cout << vec << " ";
    }
    return 0;
}