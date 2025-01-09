#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    // Prompt the user to input the number n
    cout << "Enter a number n: ";
    cin >> n;

    // Count how many numbers between 1 and n are divisible by 3
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0) {  // Check if the number is divisible by 3
            count++;
        }
    }

    // Display the result
    cout << "There are " << count << " numbers between 1 and " << n << " that are divisible by 3." << endl;

    return 0;
}
