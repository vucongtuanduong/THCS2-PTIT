#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is decreasing
bool is_decreasing(int n) {
  // Initialize previous digit as 0
  int prev = 0;
  // Loop until n becomes 0
  while (n > 0) {
    // Get the rightmost digit of n
    int curr = n % 10;
    // If current digit is greater than or equal to previous digit, return false
    if (curr >= prev) {
      return false;
    }
    // Update previous digit and reduce n by one digit
    prev = curr;
    n /= 10;
  }
  // If all digits are in decreasing order, return true
  return true;
}

// Function to count decreasing numbers in an interval [a,b]
int count_decreasing(int a, int b) {
  // Initialize count as 0
  int count = 0;
  // Loop from a to b
  for (int i = a; i <= b; i++) {
    // If i is decreasing, increment count
    if (is_decreasing(i)) {
      count++;
    }
  }
  // Return count
  return count;
}

// Main function
int main() {
  
  	// Declare variables for number of test cases and interval endpoints 
  	int t,a,b;

  	// Read input for number of test cases 
  	scanf("%d",&t);

  	// Loop for each test case 
  	for(int i=0;i<t;i++){

    	// Read input for interval endpoints 
    	scanf("%d %d",&a,&b);

    	// Print output for number of decreasing numbers 
    	printf("%d\n",count_decreasing(a,b));
  	}

  	return(0);
}