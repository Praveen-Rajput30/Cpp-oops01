#include <iostream>
using namespace std;

int main() {
    int n, reverse = 0, digit;

    cout << "Enter a number: ";
    cin >> n;

    do {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    } while (n != 0);

    cout << "Reverse of the number = " << reverse << endl;

    return 0;
}
