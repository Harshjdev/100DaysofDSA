#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted parts of the array
void merge(vector<int>& arr, int si, int mid, int ei) {
    // Create a temporary array to store the merged result
    vector<int> temp(ei - si + 1);
    int i = si, j = mid + 1, k = 0; // Initialize indices for the left and right parts of the array

    // Merge the two parts 
    while (i <= mid && j <= ei) {
        if (arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    // Copy the remaining elements from the left part of the array
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy the remaining elements from the right part of the array
    while (j <= ei) {
        temp[k++] = arr[j++];
    }

    // Copy the merged result from the temporary array back to the original array
    for (k = 0, i = si; k < temp.size(); k++, i++) {
        arr[i] = temp[k];
    }
}

// Recursive function to perform merge sort
void mergeSort(vector<int>& arr, int si, int ei) {
    if (si >= ei) return; // Base case: If the array contains only one element, it is already sorted
    int mid = si + (ei - si) / 2; // Calculate the middle index
    mergeSort(arr, si, mid); // Recursively sort the left half of the array
    mergeSort(arr, mid + 1, ei); // Recursively sort the right half of the array
    merge(arr, si, mid, ei); // Merge the sorted halves
}

// Function to print the elements of the array
void printArr(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " "; // Print each element followed by a space
    }
}

// Main function
int main() {
    vector<int> arr = {6, 3, 9, 5, 2, 8}; // Initialize an array
    mergeSort(arr, 0, arr.size() - 1); // Sort the array using merge sort
    printArr(arr); // Print the sorted array
    return 0;
}
