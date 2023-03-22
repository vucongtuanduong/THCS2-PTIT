#include <stdio.h>
#include <stdlib.h>

// A function to find the center of a star graph
int find_center(int n, int edges[][2]) {
  // Create an array of size n to store the degree of each node
  int *degree = (int *)malloc(n * sizeof(int));
  // Initialize all degrees to zero
  for (int i = 0; i < n; i++) {
    degree[i] = 0;
  }
  // Loop through the edges and increment the degree of both endpoints
  for (int i = 0; i < n - 1; i++) {
    degree[edges[i][0] - 1]++;
    degree[edges[i][1] - 1]++;
  }
  // Loop through the degree array and check if any node has a degree of n - 1
  for (int i = 0; i < n; i++) {
    if (degree[i] == n - 1) {
      // Free the memory allocated for the degree array
      free(degree);
      // Return the node number as the center
      return i + 1;
    }
  }
  // Free the memory allocated for the degree array
  free(degree);
  // Return -1 if no center exists
  return -1;
}

// A function to test some examples
void test() {
  // Example: The input given in your problem statement 
   int n =5;
   int edges[][2] = {{3,4},{3,5},{3,2},{3,1}};
   printf("The center for example input is %d\n", find_center(n,edges));

   // Another example: No center exists 
   int m =4;
   int edges2[][2] = {{1,2},{2,3},{3,4}};
   printf("The center for another example input is %d\n", find_center(m,edges2));
}
int main() {
   test();
   return(0);
}
