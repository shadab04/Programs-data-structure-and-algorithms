
#include <iostream>
using namespace std;

int main() {
    int age;
    bool isStudent;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Are you a student? (1 for Yes, 0 for No): ";
    cin >> isStudent;

    if (age < 18 || isStudent) {
        cout << "You are either a minor or a student or both." << endl;
    } else {
        cout << "You're neither a minor nor a student." << endl;
    }

    return 0;
}