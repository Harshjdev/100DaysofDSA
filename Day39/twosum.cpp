#include<iostream>
using namespace std;

string twosum(int n, int arr[], int d) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == d) {
               
                cout<<arr[i] << arr[j] << endl;
                 return "yes";
                
            }
        }
    }
    return "no";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 3;
    cout << twosum(n, arr, d);
    return 0;
}
