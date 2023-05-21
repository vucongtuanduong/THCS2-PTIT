#include <stdio.h>

// A function to count the number of beautiful pixel triplets in a matrix
int count_beautiful(int n, int m, int matrix[n][m]) {
  int count = 0; // Initialize the count to zero
  // Loop through all possible pairs of pixels on the same row
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m - 1; j++) {
      for (int k = j + 1; k < m; k++) {
        // Check if the pixels are colored and have different colors
        if (matrix[i][j] != 0 && matrix[i][k] != 0 && matrix[i][j] != matrix[i][k]) {
          // Loop through all possible pixels on the same column as the second pixel
          for (int l = 0; l < n; l++) {
            // Check if the pixel is colored and has the same color as the first pixel
            if (matrix[l][k] != 0 && matrix[l][k] == matrix[i][j]) {
              // Increment the count of beautiful pixel triplets
              count++;
            }
          }
        }
      }
    }
  }
  // Return the count
  return count;
}

// A function to read a matrix from the input
void read_matrix(int n, int m, int matrix[n][m]) {
  // Loop through all rows and columns of the matrix
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      // Read a value from the input and store it in the matrix
      scanf("%d", &matrix[i][j]);
    }
  }
}

// The main function
int main() {
  int t; // The number of test cases
  scanf("%d", &t); // Read the number of test cases from the input
  // Loop through all test cases
  for (int i = 0; i < t; i++) {
    int n, m; // The dimensions of the matrix
    scanf("%d %d", &n, &m); // Read the dimensions from the input
    int matrix[n][m]; // Declare a matrix of size n*m
    read_matrix(n, m, matrix); // Read the matrix from the input
    int result = count_beautiful(n, m, matrix); // Count the number of beautiful pixel triplets in the matrix
    printf("%d\n", result); // Print the result to the output
  }
  return 0;
}
