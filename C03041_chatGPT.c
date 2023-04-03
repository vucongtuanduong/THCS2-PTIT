#include <stdio.h>

// Define a function to check if a rectangle is a square
char* is_square(int a, int b, int c, int d) {
  // Check if the coordinates are valid
  if (!(-1000 < a && a < c && c < 1000 && -1000 < b && b < d && d < 1000)) {
    return "Invalid coordinates";
  }
  // Check if the length and width are equal
  int length = c - a;
  int width = d - b;
  if (length == width) {
    return "YES";
  } else {
    return "NO";
  }
}

int main() {
  // Read the number of test sets
  int n;
  scanf("%d", &n);

  // Loop through each test set
  for (int i = 0; i < n; i++) {
    // Read the coordinates of the rectangle
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    // Print the result of checking if it is a square
    printf("%s\n", is_square(a, b, c, d));
  }
  
  return 0;
}