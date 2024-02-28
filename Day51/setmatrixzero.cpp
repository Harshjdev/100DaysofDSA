#include <bits/stdc++.h> 
using namespace std;

// Function to modify a given matrix by setting rows and columns containing zeros to zeros entirely
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix) {
    // Get the number of rows and columns in the matrix
    int n = matrix.size(); // Number of rows
    int m = matrix[0].size(); // Number of columns

    // Initialize vectors to store the indices of rows and columns containing zeros
    vector<int> x, y; // x stores row indices, y stores column indices

    // Traverse the matrix to find zeros and store their indices
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                x.push_back(i); // Store row index
                y.push_back(j); // Store column index
            }
        }
    }

    // Setting rows containing zeros to zeros
    for (int i = 0; i < x.size(); i++) {
        int index = x[i]; // Get the row index containing zeros
        // Set all elements in the row to zero
        for (int j = 0; j < m; j++) {
            matrix[index][j] = 0;
        }
    }

    // Setting columns containing zeros to zeros
    for (int i = 0; i < y.size(); i++) {
        int index = y[i]; // Get the column index containing zeros
        // Set all elements in the column to zero
        for (int j = 0; j < n; j++) {
            matrix[j][index] = 0;
        }
    }

    // Return the modified matrix
    return matrix;
}

int main() {
    // Example usage
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 0, 6}, {7, 8, 9}};
    vector<vector<int>> modifiedMatrix = zeroMatrix(matrix);

    // Display the modified matrix
    for (const auto &row : modifiedMatrix) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
