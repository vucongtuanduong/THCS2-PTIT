#include <stdio.h>
int main()
{
    int rows, cols, i, j;
    // Input number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Print inverted parallelogram
    for(i=1; i<=rows; i++)
    {
        // Print leading spaces
        for(j=1; j<i; j++)
        {
            printf("~");
        }

        // Print stars
        for(j=1; j<=cols; j++)
        {
            printf("*");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}