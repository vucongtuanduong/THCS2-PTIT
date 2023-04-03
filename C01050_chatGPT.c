#include <stdio.h> // include the standard input output header file
int main() // define the main function
{
    // Enter the width and height
    int width, height;
    printf("Enter the width: ");
    scanf("%d", &width);
    printf("Enter the height: ");
    scanf("%d", &height);

    // Iterate over the rows
    for (int i = 0; i < height; i++)
    {
        // Iterate over the columns
        for (int j = 0; j < width; j++)
        {
            // If it is the first or last row or column, print *
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
            {
                printf("*");
            }
            // Otherwise, print space
            else
            {
                printf(" ");
            }
        }
        // Go to next line
        printf("\n");
    }
    return 0; // return 0 to indicate successful termination
}