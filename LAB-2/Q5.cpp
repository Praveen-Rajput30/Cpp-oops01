#include <iostream>
using namespace std;

int main()
{
    int n, i = 0;
    int binary[32];

    cout << "Enter a number: ";
    cin >> n;

    if (n == 0)
    {
        cout << "Binary equivalent = 0";
        return 0;
    }

    // Convert decimal to binary
    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    cout << "Binary equivalent = ";

    // Print array in reverse order
    for (i = i - 1; i >= 0; i--)
    {
        cout << binary[i];
    }

    return 0;
}
