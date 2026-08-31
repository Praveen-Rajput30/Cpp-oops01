#include <iostream>
#include <vector>

int main() {
    int n;

    // Input the size of the array
    std::cout << "Enter the number of elements (n): ";
    std::cin >> n;

    // Validate the array size
    if (n <= 0) {
        std::cout << "Please enter a valid size greater than 0." << std::endl;
        return 1;
    }

    // Declare original and reverse arrays using vectors
    std::vector<int> originalArr(n);
    std::vector<int> reverseArr(n);

    // Input elements into the original array
    std::cout << "Enter " << n << " integers:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> originalArr[i];
    }

    // Copy elements into the second array in reverse order
    for (int i = 0; i < n; ++i) {
        reverseArr[i] = originalArr[n - 1 - i];
    }

    // Display the original array
    std::cout << "\nOriginal Array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << originalArr[i] << " ";
    }

    // Display the reversed array
    std::cout << "\nReversed Array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << reverseArr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
