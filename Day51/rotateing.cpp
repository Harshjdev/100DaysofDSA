#include<iostream>
using namespace std;

void rotatematrix(int matrix[][3], int n){
    // Transpose the matrix
    for(int i = 0; i < n; i++){
        for(int j =0; j < n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Exchange the columns 0 and n-1
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n/2; j++){
            swap(matrix[i][j], matrix[i][n-1-j]);
        }
    }
}

int main(){
    int n = 3;
    int matrix[][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    rotatematrix(matrix, n);

    // Print the rotated matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}