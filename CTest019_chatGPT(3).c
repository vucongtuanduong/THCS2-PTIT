#include <stdio.h>
#include <stdlib.h>

// A function to swap two integers
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// A function to sort a column of a matrix in ascending order
void sort_column(int **mat, int n, int m, int col) {
  // Use selection sort algorithm
  for (int i = 0; i < n - 1; i++) {
    // Find the minimum element in the column from i to n-1
    int min_index = i;
    for (int j = i + 1; j < n; j++) {
      if (mat[j][col] < mat[min_index][col]) {
        min_index = j;
      }
    }
    // Swap the minimum element with the current element
    swap(&mat[i][col], &mat[min_index][col]);
  }
}

// A function to print a matrix
void print_matrix(int **mat, int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int t; // Number of test cases
  scanf("%d", &t);
  while (t--) {
    int n, m, i; // Dimensions of the matrix and the column to sort
    scanf("%d %d %d", &n, &m, &i);
    // Allocate memory for the matrix
    int **mat = (int **)malloc(n * sizeof(int *));
    for (int j = 0; j < n; j++) {
      mat[j] = (int *)malloc(m * sizeof(int));
    }
    // Read the matrix elements
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < m; k++) {
        scanf("%d", &mat[j][k]);
      }
    }
    // Sort the column i-1 (since indexing starts from 0)
    sort_column(mat, n, m, i - 1);
    // Print the sorted matrix
    print_matrix(mat, n, m);
    // Free the memory allocated for the matrix
    for (int j = 0; j < n; j++) {
      free(mat[j]);
    }
    free(mat);
  }
  return 0;
}