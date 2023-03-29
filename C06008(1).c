#include <stdio.h>
#include <string.h>


#define MAX_CHARACTER 102

//lam lai lan 1

int main () {
	char duplicate_word[MAX_CHARACTER], s1[MAX_CHARACTER][MAX_CHARACTER], k;
	int position = 0;
	while (scanf("%s", duplicate_word) != -1) {
		
		strcpy(s1[position++], duplicate_word);
	}

	for (int i = 0; i < position; i++) {
		for (int j = i + 1; j < position; j++) {
			if (strcmp(s1[j], s1[i]) == 0) {
				s1[j][0] = 0;
			}
		}
		if (s1[i][0] != 0) {
			printf("%s ", s1[i]);
		}
	}
	return 0;
}