#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of the pentagon (e.g. 5 or 7): ";
    cin >> n;

    if (n < 3) {
        cout << "Size too small for a pentagon!" << endl;
        return 1;
    }

    int width = 2 * n - 1;

    // Top part: triangle
    for (int i = 0; i < n; i++) {
        int stars = 2 * i + 1;
        int spaces = (width - stars) / 2;

        for (int j = 0; j < spaces; j++) cout << " ";
        for (int j = 0; j < stars; j++) cout << "*";
        cout << endl;
    }

    // Bottom part: rectangle (filled)
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < width; j++) cout << "*";
        cout << endl;
    }

    return 0;
}
