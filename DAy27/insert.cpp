// #include <bits/stdc++.h>
// using namespace std;

// void insertion_sort(int arr[], int n) {
//     for (int i = 0; i <= n - 1; i++) {
//         int j = i;
//         while (j > 0 && arr[j - 1] > arr[j]) {
//             int temp = arr[j - 1];
//             arr[j - 1] = arr[j];
//             arr[j] = temp;
//             j--;
//         }
//     }

//     cout << "After Using insertion sort: " << "\n";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
// }

// int main()
// {
//     int arr[] = {13, 46, 24, 52, 20, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Before Using insertion Sort: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     insertion_sort(arr, n);
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    for(int i=0 i<n; i++){
        cin>>arr[i];
    }
    
    for(int i-0; i<n; i++){
        for(int j=i; j<0;j-- ){
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
            else
            break;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"";
    }
}