#include <stdio.h>
#include <stdlib.h>

// A function to swap two integers
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// A function to sort an array using bubble sort
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

// A function to transpose a matrix
void transpose(int mat[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < m; j++)
            swap(&mat[i][j], &mat[j][i]);
}

// A function to print a matrix
void printMatrix(int mat[][100], int n, int m)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

// A function to sort a matrix column-wise
void sortMatrixColumnWise(int mat[][100], int n, int m)
{
    // Transpose the matrix
    transpose(mat, n, m);

    // Sort each row of the transposed matrix
    for (int i = 0; i < m; i++)
        bubbleSort(mat[i], n);

    // Transpose the matrix back
    transpose(mat, m, n);
}

// Driver code
int main()
{
    // Number of test cases
    int t;
    
    // Read number of test cases from input
    scanf("%d", &t);

    // Loop over each test case
    while (t--) {
        
        // Dimensions and column index of the matrix 
        int n, m, i;

        // Read dimensions and column index from input 
        scanf("%d %d %d", &n, &m ,&i);

        // Matrix declaration 
        int mat[100][100];

        // Read elements of the matrix from input 
        for (int x = 0; x < n ; x++) {
            for (int y = 0 ; y < m ; y++) {
                scanf("%d", &mat[x][y]);
            }
        }

        // Sort column i of the matrix 
        sortMatrixColumnWise(mat,n,m);

        // Print sorted matrix 
        printMatrix(mat,n,m);
        
     }

     return 0;
}