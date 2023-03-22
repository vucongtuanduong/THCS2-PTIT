#include <stdio.h>
#include <string.h>

#define MAX_CHARACTER_LENGTH 102

int main () {
	
	char compare_text[MAX_CHARACTER_LENGTH][MAX_CHARACTER_LENGTH], text[MAX_CHARACTER_LENGTH];
	int pos = 0;
	
	while (scanf("%s", &text) != -1) {
		strcpy(compare_text[pos++], text);
	}
	
	for (int i = 0; i < pos; i++) {
		for (int j = i + 1; j < pos; j++) {
			if (strcmp(compare_text[j], compare_text[i]) == 0) { // mark as duplicate
				compare_text[j][0] = 0;
			}
			
		}
		if (compare_text[i][0] != 0) {
				printf("%s ", compare_text[i]);
			}
	}
	
	return 0;
}