#include <stdio.h>
#include <string.h>

int main () {
	
	char input[101];
	gets(input);
	char *token = strtok(input, " ");
	int current = 0;
	char res[101][101];
	while (token != NULL) {
		strcpy(res[current], token);
		current++;
		token = strtok(NULL, " ");
	}
	for (int i = 0; i < current; i++) {
		int ok = 1;
		for (int j = 0;j < i;j++) {
			if (strcmp(res[i], res[j]) == 0) {
				ok = 0; //false
			}
		}
		if (ok == 1) {
			printf("%s ", res[i]);
		}
	}
}