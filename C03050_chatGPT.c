#include <stdio.h>
#include <stdlib.h>

// A structure to represent an edge
struct edge {
  int u; // First endpoint
  int v; // Second endpoint
};

// A function to find the center of a star graph
int find_center(struct edge* edges, int n) {
  // Create an array to store the frequency of each node
  int* freq = (int*)malloc(n * sizeof(int));
  // Initialize all frequencies to zero
  for (int i = 0; i < n; i++) {
    freq[i] = 0;
  }
  // Loop through the edges and increment the frequency of each endpoint
  for (int i = 0; i < n - 1; i++) {
    freq[edges[i].u - 1]++;
    freq[edges[i].v - 1]++;
  }
  // Loop through the frequency array and find the node that appears more than once
  for (int i = 0; i < n; i++) {
    if (freq[i] > 1) {
      // Free the memory allocated for frequency array
      free(freq);
      // Return the center node
      return i + 1;
    }
  }
}

// A function to read input from stdin and print output to stdout
void solve() {
   // Read N from stdin
   int n;
   scanf("%d", &n);
   // Allocate memory for N-1 edges
   struct edge* edges = (struct edge*)malloc((n - 1) * sizeof(struct edge));
   // Read N-1 edges from stdin
   for (int i = 0; i < n - 1; i++) {
     scanf("%d %d", &edges[i].u, &edges[i].v);
   }
   // Find the center of the star graph using find_center function
   int center = find_center(edges, n);
   // Print "Yes" if there is a center, "No" otherwise
   if (center) {
     printf("Yes\n");
   } else {
     printf("No\n");
   }
}

// The main function that calls solve function 
int main() {
    solve();
    return(0);
}