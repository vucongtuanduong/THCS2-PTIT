#include <stdio.h>
#include <stdlib.h>

// A function to swap two integers
void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// A function to sort an array using bubble sort
void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

// A function to transpose a matrix
void transpose(int mat[][100], int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < m; j++) {
      swap(&mat[i][j], &mat[j][i]);
    }
  }
}

// A function to print a matrix
void printMatrix(int mat[][100], int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}

// The main function
int main() {

 // Read the number of test cases
 int t;
 scanf("%d", &t);

 // Loop over each test case
 while (t--) {

   // Read the dimensions and column index of the matrix
   int n, m, k;
   scanf("%d %d %d", &n, &m, &k);

   // Read the elements of the matrix
   int mat[100][100];
   for (int i = 0; i < n; i++) {
     for (int j = 0; j < m; j++) {
       scanf("%d", &mat[i][j]);
     }
   }

   // Transpose the matrix
   transpose(mat, n, m);

   // Sort each row of the transposed matrix using bubble sort
   for (int i = 0; i < m; i++) {
     bubbleSort(mat[i], n);
   }

   // Transpose the matrix back
   transpose(mat, m, n);

   // Print the sorted matrix
   printMatrix(mat, n ,m);
 }

 return 0;
}