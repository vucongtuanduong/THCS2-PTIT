#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// A function to check if a string is valid in base 3
bool isValidBase3(char* s) {
    // Loop through each character of the string
    for (int i = 0; i < strlen(s); i++) {
        // If the character is not '0', '1' or '2', return false
        if (s[i] != '0' && s[i] != '1' && s[i] != '2') {
            return false;
        }
    }
    // If all characters are valid, return true
    return true;
}

int main() {
    // Declare variables to store the number of test cases and the input string
    int n;
    char s[19];

    // Read the number of test cases from standard input
    scanf("%d", &n);

    // Loop through each test case
    for (int i = 0; i < n; i++) {
        // Read the input string from standard input
        scanf("%s", s);

        // Check if the input string is valid in base 3 and print the result to standard output
        if (isValidBase3(s)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}