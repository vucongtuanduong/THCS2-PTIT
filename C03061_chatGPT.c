#include <stdio.h>
#include <math.h>

// A function to reverse a given number
int reverse(int n) {
  int rev = 0;
  while (n > 0) {
    rev = rev * 10 + n % 10;
    n = n / 10;
  }
  return rev;
}

// A function to check if a given number is beautiful
int is_beautiful(int n) {
  // Extracting the first and last digits
  int first = n / pow(10, (int)log10(n));
  int last = n % 10;

  // Checking if they satisfy the condition
  if (first == last * 2 || last == first * 2) {
    // Extracting the middle part by removing first and last digits
    int middle = (n % (int)pow(10, (int)log10(n))) / 10;

    // Checking if it is a palindrome by reversing it and comparing it with itself
    if (middle == reverse(middle)) {
      return 1; // The number is beautiful
    }
    else {
      return 0; // The number is not beautiful
    }
    
   }
   else {
     return 0; // The number is not beautiful 
   }
}

// The main function 
//change int to long long
int main() {
  
   int t; // The number of test cases 
   scanf("%d", &t); // Reading t from input 

   while (t--) { // Looping through each test case 
     int n; // The number to be checked 
     scanf("%d", &n); // Reading n from input 

     if (is_beautiful(n)) { // Calling the function to check if n is beautiful 
       printf("YES\n"); // Printing YES if it is 
     }
     else {
       printf("NO\n"); // Printing NO otherwise 
     }
   }

   return 0;
}