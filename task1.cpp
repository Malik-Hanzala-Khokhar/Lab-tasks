#include <iostream>
using namespace std;

int main() {
    int accountNumber, reversedNumber = 0, digitSum = 0;

    // Prompt user to input their account number
    cout << "Enter your account number: ";
    cin >> accountNumber;

    int originalNumber = accountNumber;  // Store the original number for sum calculation

    // Reverse the digits of the account number and calculate the sum
    while (accountNumber > 0) {
        int digit = accountNumber % 10;  // Extract the last digit
        reversedNumber = reversedNumber * 10 + digit;  // Build the reversed number
        digitSum += digit;  // Add the digit to the sum
        accountNumber = accountNumber / 10;  // Remove the last digit from the account number
    }

    // Display the reversed account number and the sum of digits
    cout << "Reversed account number: " << reversedNumber << endl;
    cout << "Sum of digits: " << digitSum << endl;

    return 0;
}
 