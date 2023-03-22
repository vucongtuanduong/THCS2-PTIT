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

// A function to transpose a non-square matrix
void transpose(int mat[][100], int n, int m)
{
    // Allocate a new matrix with reversed dimensions
    int (*tr)[100] = malloc(m * sizeof(*tr));
    
    // Copy each element to its corresponding position
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            tr[j][i] = mat[i][j];
    
    // Copy the transposed matrix back to the original one
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            mat[i][j] = tr[i][j];
    
    // Free the allocated memory
    free(tr);
}

// A function to print a matrix
void printMatrix(int mat[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

// The main function
int main()
{
    // The number of test cases
    int t;
    
    // Read the number of test cases
    scanf("%d", &t);
    
    // Loop over each test case
    while (t--)
    {
        // The dimensions of the matrix and the column to be sorted
        int n, m, i;
        
        // Read the dimensions and the column index
        scanf("%d %d %d", &n, &m, &i);
        
        // The matrix
        int mat[100][100];
        
        // Read the elements of the matrix row by row
        for (int r = 0; r < n; r++)
            for (int c = 0; c < m; c++)
                scanf("%d", &mat[r][c]);
        
        // Transpose the matrix
        transpose(mat, n, m);
        
        // Sort each row of the transposed matrix using bubble sort
        for (int r = 0; r < m; r++)
            bubbleSort(mat[r], n);
        
        // Transpose it back to get the sorted matrix
        transpose(mat, m, n);
        
        // Print the sorted matrix row by row
        printMatrix(mat, n, m);
        
    }
    
    return 0;
}