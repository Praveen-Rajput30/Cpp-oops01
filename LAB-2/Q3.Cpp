#include <iostream>
using namespace std;

int main() {
    int rows;

    // Prompt user for the number of rows
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop handles the number of rows
    for (int i = 1; i <= rows; ++i) {
        
        // Inner loop handles the number of stars in each row
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        
        // Move to the next line after printing all stars in the row
        cout << "\n";
    }

    return 0;
}
