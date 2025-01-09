#include <iostream>
using namespace std;

int main() {
    double bid, highestBid;

    // Prompt the user to input the first bid
    cout << "Enter bid 1: ";
    cin >> bid;
    highestBid = bid;  // Set the first bid as the highest initially

    // Prompt the user to input the remaining bids and compare them
    for (int i = 2; i <= 5; ++i) {
        cout << "Enter bid " << i << ": ";
        cin >> bid;

        // Update the highest bid if the current bid is higher
        if (bid > highestBid) {
            highestBid = bid;
        }
    }

    // Display the highest bid
    cout << "The highest bid is: " << highestBid << endl;

    return 0;
}
