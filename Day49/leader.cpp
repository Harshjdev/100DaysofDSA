#include<iostream>
using namespace std;

void leader(int arr[], int n){
    int max = arr[n-1];
    cout << max << " "; // Printing the rightmost element as it is always a leader

    // Traverse the array from right to left
    for(int i = n-2; i >= 0; i--){
        if(arr[i] > max){
            cout << arr[i] << " ";
            max = arr[i];
        }
    }
}

int main(){
    int arr[] = {9, 8, 6, 7, 0, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    leader(arr, n);

    return 0;
}
