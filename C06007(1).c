#include <stdio.h>
#include <string.h>

#define MAX_ARR_VALUE 200
#define MAX_CHARACTER 100

//lam lai lan 1

int main () {
	char deleted_word[MAX_ARR_VALUE], s1[MAX_CHARACTER][MAX_CHARACTER], k;
	int position = 0;
	while (scanf("%s", s1[position]) != -1) {
		position++;
		k = getchar();
		if (k == '\n') {
			break;
		}
	}
	gets(deleted_word);
	for (int i = 0; i < position; i++) {
		if (strcmp(deleted_word, s1[i]) == 0) {
			s1[i][0] = 0;
		}
		if (s1[i][0] != 0) {
			printf("%s ", s1[i]);
		}
	}
	return 0;
}