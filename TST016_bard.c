#include <stdio.h>

int main() {
  char str[100];
  int i, j, count = 0;

  // Get the input string
  printf("Enter a string: ");
  scanf("%s", str);

  // Iterate through the string
  for (i = 0; str[i] != '\0'; i++) {
    // Check if the current character is a parenthesis, bracket, or brace
    if (str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}' || str[i] == '[' || str[i] == ']') {
      // Check if the next character is the opposite of the current character
      if (str[i] == '(' && str[i + 1] == ')') {
        count++;
        i++;
      } else if (str[i] == '{' && str[i + 1] == '}') {
        count++;
        i++;
      } else if (str[i] == '[' && str[i + 1] == ']') {
        count++;
        i++;
      }
    }
  }

  // If the count is even, the string is symmetric
  if (count % 2 == 0) {
    printf("1\n");
  } else {
    printf("0\n");
  }

  return 0;
}
