#include <stdio.h>
int main()
{
    int t; // number of test cases
    scanf("%d", &t);
    while (t--)
    {
        int n; // number of elements
        scanf("%d", &n);
        int arr[n]; // array of elements
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int count = 1; // number of elements that are not smaller than the numbers before them
        int max = arr[0]; // maximum element seen so far
        for (int i = 1; i < n; i++)
        {
            if (arr[i] >= max) // if current element is not smaller than maximum element
            {
                count++; // increment count
                max = arr[i]; // update maximum element
            }
        }
        printf("%d\n", count); // print count
    }
    return 0;
}