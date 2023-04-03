#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_CHAR_LENGTH 105

void encode(char input[MAX_CHAR_LENGTH]) {
	int n = strlen(input);
	char output[MAX_CHAR_LENGTH];
	output[0] = '\0';
	char current_char = input[0];
	int current_count = 1;
	for (int i = 1; i < n; i++) {
		if (input[i] != current_char) {
			sprintf(output + strlen(output), "%c%d", current_char, current_count);
			current_char = input[i];
			current_count = 1;
		}
		else {
			current_count++;
		}
	}
	// add the last character and its frequency
	sprintf(output + strlen(output), "%c%d", current_char, current_count);
	printf("%s", output);
	printf("\n");
}

// lam lai lan 1
int main () {
	int test;
	scanf("%d\n", &test);
	while (test--) {
		char input[MAX_CHAR_LENGTH];
		gets(input);
		encode(input);
	}
	return 0;
}