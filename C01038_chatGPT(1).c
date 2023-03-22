#include <stdio.h>
#include <string.h>

// A function to swap two characters
void swap(char *a, char *b) {
  char temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  // Declare a character array to store the number as a string
  char num[10];
  
  // Read the input from the user
  printf("Enter a positive integer not more than 9 digits: ");
  scanf("%s", num);
  
  // Get the length of the string
  int len = strlen(num);
  
  // Swap the first and last characters of the string
  swap(&num[0], &num[len-1]);
  
  // Remove any leading zeros from the swapped string
  while (num[0] == '0') {
    for (int i = 0; i < len-1; i++) {
      num[i] = num[i+1];
    }
    len--;
    num[len] = '\0';
  }
  
  // Print the result on one line
  printf("The result is: %s\n", num);
  
  return 0;
}