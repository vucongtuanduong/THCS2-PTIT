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
void to_upper(char input[]) {
	int n = strlen(input);
	for (int i = 0; i < n ; i++) {
		if (input[i] >= 'a' && input[i] <= 'z') {
			input[i] -= ('a' - 'A');
		}
	}
}
void email(char input[]) {
	
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
		if (i != current - 1) {
			printf("%c", res[i][0]);
		} else {
			printf("%s", res[i]);
		}
		
	}
	printf("@ptit.edu.vn");
}
int main () {

	char input[81];
	gets(input);
	email(input);


	
}