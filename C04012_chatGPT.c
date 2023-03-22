#include <stdio.h>
#define MAX_SIZE 100 // Maximum size of the array

int main()
{
    int arr[MAX_SIZE]; // Original array
    int freq[MAX_SIZE]; // Frequency array
    int size; // Size of the array
    int i, j; // Loop variables
    int count; // Frequency counter
    
    // Input size and elements of the array
    printf("Enter size of the array: ");
    scanf("%d", &size);
    
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        
        // Initially initialize frequencies to -1
        freq[i] = -1;
    }
    
    // Count frequency of each element
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            /* If duplicate element is found */
            if(arr[i]==arr[j])
            {
                count++;
                
                /* Make sure not to count frequency of same element again */
                freq[j] = 0;
            }
        }
        
        /* If frequency of current element is not counted */
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    
    // Print all elements that appear more than once
    printf("Elements that appear more than once: ");
    
    for(i=0; i<size; i++)
    {
        if(freq[i] > 1)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}