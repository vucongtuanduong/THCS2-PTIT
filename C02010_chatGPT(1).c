#include <stdio.h>

int main()
{
  int rows, cols; // variables for number of rows and columns
  printf("Enter number of rows and columns (not more than 9): ");
  scanf("%d %d", &rows, &cols); // input rows and columns

  int i, j; // loop variables
  int num; // variable for printing numbers

  for (i = 0; i < rows; i++) // outer loop for each row
  {
    num = i + 1; // start with row number + 1
    for (j = 0; j < cols; j++) // inner loop for each column
    {
      printf("%d", num); // print the number
      num++; // increment the number
      if (num > cols) // if number exceeds columns, reset to 1
        num = 1;
    }
    printf("\n"); // print a new line after each row
  }

  return 0;
}