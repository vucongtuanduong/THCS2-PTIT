#include <stdio.h>

int main()
{
    int i, j, rows;

    // Input number of rows from user
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    // Iterate through rows
    for(i=1; i<=rows; i++)
    {
        // Print star for first and last row
        if(i==1 || i==rows)
        {
            for(j=1; j<=i; j++)
            {
                printf("*");
            }
        }
        else
        {
            // Print star for first column
            printf("*");

            // Print space for middle columns
            for(j=1; j<i-1; j++)
            {
                printf(" ");
            }

            // Print star for last column
            printf("*");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}