#include <stdio.h>
#include <string.h>

// A function to split a string into two halves and return their sum
int split_and_sum(char *str) {
  int len = strlen(str); // get the length of the string
  int mid = len / 2; // get the middle index
  char left[mid + 1]; // create a character array for the left half
  char right[len - mid + 1]; // create a character array for the right half
  strncpy(left, str, mid); // copy the left half of the string to the left array
  left[mid] = '\0'; // add a null terminator to the left array
  strcpy(right, str + mid); // copy the right half of the string to the right array
  right[len - mid] = '\0'; // add a null terminator to the right array
  int left_num = atoi(left); // convert the left array to an integer
  int right_num = atoi(right); // convert the right array to an integer
  return left_num + right_num; // return their sum
}

// A function to print each step of the process until the result is a single digit
void print_steps(char *str) {
//  printf("%s\n", str); // print the original string
  while (strlen(str) > 1) { // loop until the string has only one character
    int sum = split_and_sum(str); // get the sum of the two halves of the string
    sprintf(str, "%d", sum); // convert the sum to a string and store it in the original string
    printf("%s\n", str); // print the new string
  }
}

int main() {
  char str[201]; // create a character array of size 201
  scanf("%s", str); // read a string from the user input
  print_steps(str); // call the print_steps function with the input string
  return 0;
}