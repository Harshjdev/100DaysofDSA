#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Function to count frequency
vector<int> countFrequency(int n, int x, vector<int> &nums) {
    vector<int> arr(n, 0); // Initialize arr with zeros, size n

    map<int, int> mpp; // Create a map to store frequency of elements

    // Iterate through each element in nums
    for (auto i : nums) {
        mpp[i]++; // Increment the frequency of the current element in map
    }

    // Iterate through indices from 0 to n-1
    for (int i = 0; i < n; i++) {
        arr[i] = mpp[i]; // Assign frequency of element i to arr[i]
    }

    return arr; // Return the vector containing frequencies
}

// Main function
int main() {
    vector<int> nums = {1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3}; // Sample input vector
    int n = 5; // Assuming n is 5 for this example
    int x = 0; // Not used in the function, assuming it's a placeholder

    // Call countFrequency function
    vector<int> result = countFrequency(n, x, nums);

    // Output the result
    for (int freq : result) {
        cout << freq << " ";
    }
    cout << endl;

    return 0; // Return 0 to indicate successful execution
}
