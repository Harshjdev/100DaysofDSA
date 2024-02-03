//rotate array by D places
#include <iostream>
using namespace std;

void RotateeletoRight(int arr[], int n, int k) {
    int temp[k]; 
//store  1,2,3 to temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }
    //rotate 4,5,6 to left
    for (int i = n-k; i < n; i++) {
        arr[k+i-n] = arr[i];
    }
    //store temp into 3,4,5 index
    for (int i = 0; i < k; i++) {
        arr[n-k+i] = temp[i];
    }
}

int main() {
    int n = 6;
    int arr[] = {1, 2, 3, 4, 5, 6};
    int k = 3;
    RotateeletoRight(arr, n, k);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
