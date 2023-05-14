#include <stdio.h>
#include <string.h>
void to_lower(char input[]) {
	int n = strlen(input);
	
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			if (input[i] >= 'a' && input[i] <= 'z') {
				input[i] -= ('a' - 'A');
			}
		} else {
				if (input[i] >= 'A' && input[i] <= 'Z') {
				input[i] += ('a' - 'A');
			}
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
void standard(char input[]) {
	
	char res[81][81];
	char *token = strtok(input, " ");
	int current = 0;
	while (token != NULL) {
		strcpy(res[current], token);
		current++;
			
		token = strtok(NULL, " ");
	}
	for (int i = 0; i < current; i++) {
		to_lower(res[i]);	
		printf("%s ", res[i]);
	}
}
int main () {
	int test;
	scanf("%d", &test);
	scanf("\n");
	while (test--) {
		char input[81];
		gets(input);
		standard(input);
		printf("\n");
	}
	
}