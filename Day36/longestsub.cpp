#include <iostream>
#include <vector>
using namespace std;

// Function to find the length of the longest subarray with sum equal to k
int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); // size of the array

    int len = 0; // variable to store the length of the longest subarray
    long long s = 0; // variable to store the current sum of elements in the subarray

    for (int i = 0; i < n; i++) { // loop through each possible starting index of the subarray
        for (int j = i; j < n; j++) { // loop through each possible ending index of the subarray
            s += a[j]; // add the element at index j to the current sum

            // if the current sum equals k, update the length of the longest subarray
            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len; // return the length of the longest subarray
}

int main()
{
    vector<int> a = {2, 3, 5, 1, 9}; // input array
    long long k = 10; // target sum
    int len = getLongestSubarray(a, k); // call the function to find the length of the longest subarray
    cout << "The length of the longest subarray is: " << len << "\n"; // output the result
    return 0;
}
