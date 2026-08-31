#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    // Outer loop manages the total number of rows
    for (int i = 1; i <= rows; ++i) {
        
        // Inner loop prints digits starting from 1 up to the current row number
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        
        // Move to the next line after completing a row
        cout << "\n";
    }

    return 0;
}
