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
void to_upper(char input[]) {
	int n = strlen(input);
	for (int i = 0; i < n ; i++) {
		if (input[i] >= 'a' && input[i] <= 'z') {
				input[i] -= ('a' - 'A');
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
	to_upper(res[0]);
	for (int i = 1; i < current; i++) {
		to_lower(res[i]);	
		if (i != current - 1) {
			printf("%s ", res[i]);
		} else {
			printf("%s", res[i]);
		}
		
	}
	printf(", %s", res[0]);
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