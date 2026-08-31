#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder;
    int reversedNum = 0;

    // Prompt user for input
    cout << "Enter an integer: ";
    cin >> num;

    // Store the original number to compare later
    originalNum = num;

    // Loop to reverse the digits of the number
    while (num > 0) {
        remainder = num % 10;                  // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Append digit to reversed number
        num = num / 10;                        // Remove the last digit
    }

    // Check if the original number matches the reversed number
    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome number." << endl;
    } else {
        cout << originalNum << " is not a palindrome number." << endl;
    }

    return 0;
}
