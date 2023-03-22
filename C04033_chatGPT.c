#include <stdio.h>
#define MAX_SIZE 100 // Maximum size of the array

int main()
{
    int arr[MAX_SIZE]; // Declare an array of MAX_SIZE
    int size; // Store number of elements entered by user
    int i, j, k; // Loop control variables

    // Input size of the array
    printf("Enter size of the array : ");
    scanf("%d", &size);

    // Input elements in the array
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find duplicate elements in the array
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            // If any duplicate element found
            if(arr[i] == arr[j])
            {
                // Delete the current duplicate element
                for(k=j; k<size-1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                // Decrement size after removing duplicate element
                size--;

                // If shifting of elements occur then don't increment j
                j--;
            }
        }
    }

    // Print updated array 
    printf("\nArray elements after deleting duplicates : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

   return 0;
}