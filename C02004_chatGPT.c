#include <stdio.h>
#define N 100 // maximum value of n

int main()
{
    int n; // length of side of parallelogram
    printf("Enter n: ");
    scanf("%d", &n); // input n from user
    if (n > 0 && n <= N) // check if n is valid
    {
        for (int i = 0; i < n; i++) // loop for rows
        {
            for (int j = 0; j < i; j++) // loop for spaces before stars
            {
                printf(" ");
            }
            for (int k = 0; k < n; k++) // loop for stars
            {
                if (i == 0 || i == n - 1 || k == 0 || k == n - 1) // condition for printing solid stars
                {
                    printf("*");
                }
                else // condition for printing hollow stars
                {
                    printf(".");
                }
            }
            printf("\n"); // new line after each row
        }
    }
    else // if n is invalid
    {
        printf("Invalid input.\n");
    }
    return 0;
}