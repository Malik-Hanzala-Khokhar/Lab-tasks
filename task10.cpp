#include <iostream>
using namespace std;

int main() {
    int number, totalDigits = 0, evenDigits = 0, oddDigits = 0;

    // Prompt the user to input a number
    cout << "Enter a number: ";
    cin >> number;

    // Store the original number for display purposes
    int originalNumber = number;

    // Handle negative numbers by making them positive
    if (number < 0) {
        number = -number;
    }

    // Loop to count digits and categorize them as even or odd
    while (number > 0) {
        int digit = number % 10;  // Extract the last digit
        totalDigits++;            // Increment the total digit count

        // Check if the digit is even or odd
        if (digit % 2 == 0) {
            evenDigits++;         // Increment even digit count
        } else {
            oddDigits++;          // Increment odd digit count
        }

        number /= 10;             // Remove the last digit
    }

    // Display the results
    cout << "For the number " << originalNumber << ":" << endl;
    cout << "Total digits: " << totalDigits << endl;
    cout << "Even digits: " << evenDigits << endl;
    cout << "Odd digits: " << oddDigits << endl;

    return 0;
}
