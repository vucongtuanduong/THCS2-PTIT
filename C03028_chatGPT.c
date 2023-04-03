#include <stdio.h>
#define MAX 10 // maximum number of rows

int main()
{
    int arr[MAX][MAX]; // 2D array to store values
    int n; // number of rows entered by user
    printf("Please enter the number of rows you wish to see in Pascal's triangle\n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) // loop for each row
    {
        for(int j = 0; j <= i; j++) // loop for each column
        {
            if(j == 0 || j == i) // first and last element of each row is 1
                arr[i][j] = 1;
            else // other elements are sum of two elements above it
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }

    for(int i = 0; i < n; i++) // loop to print the triangle
    {
        for(int j = 0; j <= i; j++)
            printf("%d ", arr[i][j]); // print each element with a space
        printf("\n"); // move to next line after each row
    }

    return 0;
}