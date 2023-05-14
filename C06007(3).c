#include <stdio.h>
#include <string.h>

int main () {
	
	char input[101];
	char deleted[101];
	gets(input);
	gets(deleted);
	char *token = strtok(input, " ");
	int current = 0;
	char res[101][101];
	while (token != NULL) {
		if (strcmp(token, deleted) != 0) {
			strcpy(res[current], token);
			current++;
		}
		token = strtok(NULL, " ");
		
	}
	for (int i = 0; i < current; i++) {
		printf("%s ", res[i]);
	}
}