#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the square: ";
    cin >> n;

    for (int i = 0; i < n; i++) {           // rows
        for (int j = 0; j < n; j++) {       // columns
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
