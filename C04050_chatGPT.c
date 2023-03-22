#include <stdio.h>
#include <stdlib.h>

// A function to sort an array using insertion sort
void insertion_sort(int arr[], int n) {
  int i, j, key;
  for (i = 1; i < n; i++) {
    key = arr[i];
    j = i - 1;
    // Move elements of arr[0..i-1], that are greater than key,
    // to one position ahead of their current position
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

// A function to remove duplicates from a sorted array
int remove_duplicates(int arr[], int n) {
  int i, j;
  if (n == 0 || n == 1)
    return n;

  // To store index of next unique element
  j = 0;

  // Doing same as done in Method 1
  // Just maintaining another updated index i.e. j
  for (i = 0; i < n - 1; i++)
    if (arr[i] != arr[i + 1])
      arr[j++] = arr[i];

   // Store the last element as whether it is unique or repeated,
   // it hasn't stored previously
   arr[j++] = arr[n - 1];

   return j;
}

// A function to print the intersection of two sorted arrays
void print_intersection(int a[], int b[], int m, int n) {
   int i = 0, j = 0;
   while (i < m && j < n) {
     if (a[i] < b[j])
       i++;
     else if (b[j] < a[i])
       j++;
     else /* if a[i] == b[j] */
     {
       printf("%d ", b[j++]);
       i++;
     }
   }
}

// A function to print the difference of two sorted arrays
void print_difference(int a[], int b[], int m, int n) {
   int i = 0, j = 0;
   while (i < m && j < n) {
     if (a[i] < b[j]) {
       printf("%d ", a[i]);
       i++;
     }
     else if (b[j] < a[i])
       j++;
     else /* if a[i] == b[j] */
     {
       i++;
       j++;
     }
   }

   // Print remaining elements of the larger array
   while(i < m)
      printf("%d ", a[i++]);
}

int main() {

   // Input the size and elements of the arrays
   int n,m,i,j,k,l;

   scanf("%d %d",&n,&m);

   int *a,*b;

   a=(int *)malloc(n*sizeof(int));
   
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
  }
   b=(int *)malloc(m*sizeof(int));

   for(i=0;i<m;i++)
      scanf("%d",&b[i]);

   // Sort the arrays
   insertion_sort(a,n);
   insertion_sort(b,m);

   // Remove duplicates from the arrays
   k = remove_duplicates(a,n);
   l = remove_duplicates(b,m);

   // Print the intersection of A and B
   print_intersection(a,b,k,l);
   printf("\n");

   // Print the difference of A and B
   print_difference(a,b,k,l);
   printf("\n");

   // Print the difference of B and A
   print_difference(b,a,l,k);
   
   
  return 0;
}