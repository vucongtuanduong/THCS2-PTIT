#include <stdio.h>

int main()
{
    int n; // the height of the triangle
    scanf("%d", &n); // read the input
    for (int i = 1; i <= n; i++) // loop for each row
    {
        for (int j = 1; j <= i; j++) // loop for each column
        {
            int num = j % 10; // get the last digit of j
            if (num == 0) num = 10; // replace 0 with 10
            printf("%d", num); // print the number
        }
        printf("\n"); // print a new line
    }
    return 0;
}