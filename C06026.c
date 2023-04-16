#include <stdio.h>
#define MAX_WORD_LENGTH 50
#define MAX_LENGTH 10000
int is_palindrome(char input[MAX_WORD_LENGTH]) {
	int n = strlen(input);
	for (int i = 0; i <= n / 2; i++) {
		if (input[i] != input[n - i - 1]) {
			return 0;
		}
	}
	return 1;
}
int main () {
	char input[MAX_WORD_LENGTH];
	char res[MAX_LENGTH][MAX_WORD_LENGTH];
	int word = 0;
	int max = 0;
	while (scanf("%s", input) != -1) {
		if (is_palindrome(input) == 1) {
			int x = strlen(input);
			strcpy(res[word++], input);
			if (x > max) {
				max = x;
			}
		}
	}
	for (int i = 0; i < word; i++) {
		if (strlen(res[i]) == max) {
			int count = 1;
			for (int j = i + 1; j < word; j++) {
				if (strcmp(res[i], res[j]) == 0) {
					res[j][0] = 0;
					count++;
				}
			}
			printf("%s %d\n", res[i], count);
		}
	}
	return 0;
}