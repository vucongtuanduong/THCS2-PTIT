#include <stdio.h>
#include <string.h>

// A function to check if a number is circular or not
int is_circular(char *num) {
  int len = strlen(num); // Get the length of the number
  int i, j, k; // Loop variables
  char temp[len + 1]; // A temporary string to store the product
  for (i = 1; i <= len; i++) { // Loop from 1 to N
    // Multiply the number by i and store the result in temp
    sprintf(temp, "%lld", (long long) i * atoll(num));
    // Check if the length of temp is equal to len
    if (strlen(temp) != len) {
      return 0; // If not, return 0 (false)
    }
    // Loop through the digits of temp
    for (j = 0; j < len; j++) {
      // Find the position of the first digit of num in temp
      k = (j + len - num[0] + '0') % len;
      // Check if the digits match in a circular way
      if (temp[k] != num[j]) {
        return 0; // If not, return 0 (false)
      }
    }
  }
  return 1; // If all checks pass, return 1 (true)
}

int main() {
  int t; // The number of test cases
  char num[61]; // The number to be checked
  scanf("%d", &t); // Read the number of test cases
  while (t--) { // Loop through the test cases
    scanf("%s", num); // Read the number
    if (is_circular(num)) { // Check if it is circular
      printf("YES\n"); // If yes, print YES
    } else {
      printf("NO\n"); // If no, print NO
    }
  }
  return 0;
}
