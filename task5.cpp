#include <iostream>
using namespace std;

int main() {
    int batchNumber, sumOfDigits = 0, digit;

    // Prompt the user to input the batch number
    cout << "Enter the batch number: ";
    cin >> batchNumber;

    // Calculate the sum of the digits of the batch number
    int originalBatchNumber = batchNumber; // Keep the original batch number for display
    while (batchNumber > 0) {
        digit = batchNumber % 10;  // Extract the last digit
        sumOfDigits += digit;      // Add the digit to the sum
        batchNumber /= 10;         // Remove the last digit
    }

    // Check if the sum of digits is divisible by 3
    if (sumOfDigits % 3 == 0) {
        cout << "Batch number " << originalBatchNumber << " is valid." << endl;
    } else {
        cout << "Batch number " << originalBatchNumber << " is invalid." << endl;
    }

    return 0;
}
