#include <stdio.h>
int main()
{
    int N; //variable to store the length of side
    printf("Enter the length of side: ");
    scanf("%d", &N); //input from user
    if (N > 0 && N <= 100) //check if N is valid
    {
        for (int i = 1; i <= N; i++) //outer loop for rows
        {
            for (int j = 1; j <= N - i; j++) //inner loop for spaces
            {
                printf("~");
            }
            for (int k = 1; k <= N; k++) //inner loop for stars
            {
                printf("*");
            }
            printf("\n"); //new line after each row
        }
    }
    else
    {
        printf("Invalid input.\n"); //error message if N is invalid
    }
    return 0;
}