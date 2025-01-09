#include <iostream>
using namespace std;

int main() {
    int x, range;

    // Prompt the user to input the number and the range
    cout << "Enter the number for the multiplication table: ";
    cin >> x;
    cout << "Enter the range for the multiplication table: ";
    cin >> range;

    // Display the multiplication table
    cout << "Multiplication table for " << x << " up to " << range << ":" << endl;
    for (int i = 1; i <= range; ++i) {
        cout << x << " * " << i << " = " << x * i << endl;
    }

    return 0;
}
