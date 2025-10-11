#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    for (int i = 0; i < rows; i++) {         // loop through rows
        for (int j = 0; j < cols; j++) {     // loop through columns
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
