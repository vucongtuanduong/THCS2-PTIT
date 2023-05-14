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
void deleted(char input[], char del[]) {
	
	char res[81][81];
	char lower[81][81];
	to_lower(del);
	char *token = strtok(input, " ");
	int current = 0;
	while (token != NULL) {
		strcpy(res[current], token);
		strcpy(lower[current], token);
		current++;
		token = strtok(NULL, " ");
	}
	for (int i = 0; i < current; i++) {
		to_lower(lower[i]);	
		if (strcmp(lower[i], del) != 0) {
			printf("%s ", res[i]);
		}
}
}
int main () {
	int test;
	scanf("%d", &test);
	scanf("\n");
	for (int z = 1; z <= test; z++) {
		char input[201];
		char del[21];
		gets(input);
		gets(del);
		printf("Test %d: ", z);
		deleted(input, del);
		printf("\n");
	}

}