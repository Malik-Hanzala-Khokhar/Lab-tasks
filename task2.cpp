#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt user to input the range (1 to n)
    cout << "Enter the value of n: ";
    cin >> n;

    // Initialize counters for even and odd numbers
    int evenCount = 0;
    int oddCount = 0;

    // Iterate through all numbers from 1 to n
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            cout << i << " is even." << endl;
            evenCount++;  // Increment the even count
        } else {
            cout << i << " is odd." << endl;
            oddCount++;  // Increment the odd count
        }
    }

    // Display the count of even and odd numbers
    cout << "Total even numbers: " << evenCount << endl;
    cout << "Total odd numbers: " << oddCount << endl;

    return 0;
}
