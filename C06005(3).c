#include <stdio.h>
#include <string.h>
void to_lower(char input[]) {
	int n = strlen(input);
	for (int i = 0; i < n; i++) {
		if (input[i] >= 'A' && input[i] <= 'Z') {
			input[i] += ('a' - 'A');
		}
	}
}
int copy(char input[], char res[][101]) {
	int current = 0;
	char *token = strtok(input, " ");
	while (token != NULL) {
		strcpy(res[current], token);
		current++;
		token = strtok(NULL, " ");
	}
	return current;
}
void count_fre(char input[]) {
	int n = strlen(input);
	char res[101][101];
	int length = copy(input, res);
	int ok[101] = {0};
	for (int i = 0;i < length; i++) {
		if (ok[i] == 0) {
			int count = 1;
			for (int j = i + 1; j < length; j++) {
				if (strcmp(res[i], res[j]) == 0) {
					count++;
					ok[j] = 1;
				}
			}
			printf("%s %d\n", res[i], count);
		}
		
	}
	
}
int main () {
	
	char input[101];
	gets(input);
	to_lower(input);
	count_fre(input);
}