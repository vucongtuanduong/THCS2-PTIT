#include <stdio.h>
#include <string.h>
#include <ctype.h>

void to_lower(char input[]) {
	for (int i = 0; i < strlen(input); i++) {
		if (input[i] >= 'A' && input[i] <= 'Z') {
			input[i] += 32;
		}
	}
}

int new_char (char input[], char dest[][50]) {
	int count = 0;
	char *token = strtok(input, " ");
	
	while (token != NULL) {
		
		strcpy(dest[count], token);
		count++;
		token = strtok(NULL, " ");
	}
	return count;
}

void count_fre(char input[]) {
	char ok[20] = {0};
	char res[20][50];
	int l = new_char(input, res);
	for (int i = 0; i < l; i++) {
		if (ok[i] == 0) {
			int count = 1;
			for (int j = i + 1; j < l; j++) {
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