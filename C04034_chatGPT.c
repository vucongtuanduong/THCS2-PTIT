#include <stdio.h>
void printLeaders(int arr[], int size)
{
  int i, j;
  for (i = 0; i < size; i++)
  {
    int flag = 1; // assume arr[i] is a leader
    for (j = i + 1; j < size; j++)
    {
      if (arr[i] < arr[j]) // if there is an element greater than arr[i] on its right
      {
        flag = 0; // arr[i] is not a leader
        break;
      }
    }
    if (flag == 1) // if arr[i] is a leader
      printf("%d ", arr[i]);
  }
}
int main()
{
  int n;
  scanf("%d", &n); // input number of test cases
  while (n--)
  {
    int size;
    scanf("%d", &size); // input size of array
    int arr[size];
    for (int i = 0; i < size; i++)
      scanf("%d", &arr[i]); // input array elements
    printLeaders(arr, size); // print leaders in array
    printf("\n");
  }
}