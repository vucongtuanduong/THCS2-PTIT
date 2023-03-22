#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_CHAR_LENGTH 105

#define MAX_OUTPUT_LENGTH 205

int main() {
	
	int test;
	scanf("%d", &test);
	while (test--) {
		char output[MAX_CHAR_LENGTH], input[MAX_CHAR_LENGTH];
		scanf("%s", input);
		output[0] = '\0'; // initialise output with empty string
		char current_char = input[0];
		int current_count = 1;
		
		for (int i = 1; i < strlen(input); i++) {
			if (input[i] != current_char) { // if the character is different from its previous character
				sprintf(output + strlen(output), "%c%d", current_char, current_count);// append the ouput with current character
				/*
				This function is used to append a formatted string to the end of another string. It takes four arguments:

output: a pointer to the destination string
strlen(output): the length of the destination string, used to find the position where the new string will be appended
“%c%d”: a format specifier that indicates how the next two arguments will be formatted. %c means a single character and %d means a decimal integer
current_char: the character to be appended
current_count: the integer to be appended
For example, if output is “aa” and current_char is ‘b’ and current_count is 3, then the function will append “b3” to output and make it “aab3”.
				
				
				*/
				current_char = input[i];
				current_count = 1;
			}
			else { // if the character is the same as previous character
				current_count++;
			}	
		}
		// add the last character and number of times it appears
		sprintf(output + strlen(output), "%c%d", current_char, current_count);
		printf("%s", output);
		printf("\n");
	}
	
	
	return 0;
}