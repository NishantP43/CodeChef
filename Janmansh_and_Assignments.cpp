#include <iostream>

using namespace std;

// Function to check if Janmansh can complete assignments on time
string can_complete_assignments(int X) {
    // Calculate the time left until 10 pm
    int time_left = 10 - X;
    
    // Check if Janmansh has enough time to complete all assignments
    if (time_left >= 3) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    int T;
    cin >> T; // Input number of test cases

    // Iterate through each test case
    for (int i = 0; i < T; ++i) {
        int X;
        cin >> X; // Input time when Janmansh starts doing assignments
        
        // Check if Janmansh can complete assignments on time for this test case
        string result = can_complete_assignments(X);
        
        // Output the result
        cout << result << endl;
    }

    return 0;
}
