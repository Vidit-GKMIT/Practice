#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the diamond (odd number): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Please enter an odd number for better symmetry." << endl;
        return 1;
    }

    int mid = n / 2;

    // Top half (including middle row)
    for (int i = 0; i <= mid; i++) {
        // Print leading spaces
        for (int j = 0; j < mid - i; j++)
            cout << " ";

        // Print stars
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";

        cout << endl;
    }

    // Bottom half
    for (int i = mid - 1; i >= 0; i--) {
        // Print leading spaces
        for (int j = 0; j < mid - i; j++)
            cout << " ";

        // Print stars
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
