#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Prompt the user to input the number n
    cout << "Enter a number n: ";
    cin >> n;

    // Loop through all numbers from 1 to n
    for (int i = 1; i <= n; ++i) {
        // Check if the number is odd
        if (i % 2 != 0) {
            sum += i;  // Add the odd number to the sum
        }
    }

    // Display the sum of odd numbers
    cout << "The sum of all odd numbers between 1 and " << n << " is: " << sum << endl;

    return 0;
}
