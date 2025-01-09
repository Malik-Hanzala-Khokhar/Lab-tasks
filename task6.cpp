#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Prompt the user to input two numbers, a and b
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;

    // Ensure that a is less than or equal to b
    if (a > b) {
        swap(a, b); // If a is greater than b, swap them
    }

    // Calculate the midpoint of the range
    double midpoint = (a + b) / 2.0;

    // Display the midpoint
    cout << "The midpoint of the range [" << a << ", " << b << "] is: " << midpoint << endl;

    // Compare each number in the range to the midpoint
    for (int i = a; i <= b; ++i) {
        if (i < midpoint) {
            cout << i << " is less than the midpoint." << endl;
        } else if (i > midpoint) {
            cout << i << " is greater than the midpoint." << endl;
        } else {
            cout << i << " is equal to the midpoint." << endl;
        }
    }

    return 0;
}
