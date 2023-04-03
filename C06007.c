#include <stdio.h>
#include <string.h>

#define MAX_CHARACTER_LENGTH 100

int main () {
	
	char compare[MAX_CHARACTER_LENGTH], text[MAX_CHARACTER_LENGTH][MAX_CHARACTER_LENGTH], k;
	int pos1 = 0;
	while (scanf("%s" , text[pos1]) != -1) {
		pos1++;
		k = getchar();
		if (k == 10) { // newline character in ascii table
			break;
		}
	}
	gets(compare);
	for (int i = 0; i < pos1; i++) {
		if (strcmp(text[i], compare) == 0) {
			text[i][0] = 0;
		}
		if (text[i][0] != 0) {
			printf("%s ", text[i]);
		}
	}
	return 0;
}