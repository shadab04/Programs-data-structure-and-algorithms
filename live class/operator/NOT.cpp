#include <iostream>
using namespace std;

int main() {
    bool isSunny;

    cout << "Is it sunny today? (1 for Yes, 0 for No): ";
    cin >> isSunny;

    if (!isSunny) {
        cout << "You might need an umbrella today." << endl;
    } else {
        cout << "Enjoy the sunny day!" << endl;
    }

    return 0;
}
