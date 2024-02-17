#include <iostream>
#include <vector>
using namespace std;

void findMinNotes(int T) {
    // Available notes
    int notes[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};

    // Vector to store the count of each note
    vector<int> count(9, 0);

    // Iterate through the notes
    for (int i = 0; i < 9; ++i) {
        // Count the number of notes needed
        count[i] = T / notes[i];
        
        // Update the remaining amount
        T = T % notes[i];
    }

    // Check if it is not possible to make a change
    if (T != 0) {
        cout << -1 << endl;
        return;
    }

    // Print the result
    for (int i = 0; i < 9; ++i) {
        if (count[i] > 0) {
            cout << notes[i] << " " << count[i] << endl;
        }
    }
}

int main() {
    // Input variable
    // int T;

    // // Taking input from the user
    // cout << "Enter the amount T: ";
    // cin >> T;

    // Find and print the minimum number of notes
    findMinNotes(109);

    return 0;
}
