#include <stdio.h>

int main()
{
    int rows, cols; // number of rows and columns
    scanf("%d %d", &rows, &cols); // input rows and columns
    int arr[rows][cols]; // array to store the numbers
    int i, j; // loop variables

    // fill the array with numbers from 1 to cols
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            arr[i][j] = (j + 1) % 10;
        }
    }

    // rotate the array by shifting each row to the left by its index
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < i; j++)
        {
            int temp = arr[i][0]; // store the first element of the row
            // shift all elements to the left by one position
            for (int k = 0; k < cols - 1; k++)
            {
                arr[i][k] = arr[i][k + 1];
            }
            arr[i][cols - 1] = temp; // put the first element at the end of the row
        }
    }

    // print the array as a rectangle of numbers
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}