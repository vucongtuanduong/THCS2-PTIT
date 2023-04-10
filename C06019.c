#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main () {
	char name[MAX_SIZE][MAX_SIZE], input[MAX_SIZE];
	gets(input);
	int word = 0, current_pos = 0;// word is a variable that stores number of input words minus 1
	for (int i = 0; i < strlen(input); i++) {
		if (input[i] == ' ') {
			name[word][current_pos] = 0;
			if (current_pos != 0) {
				word++;
			}
			current_pos = 0;
		} else {
			name[word][current_pos++] = input[i];
		}
	}
	for (int i = 0; i <= word; i++) {
		if (name[i][0] >= 'A' && name[i][0] <= 'Z') {
			name[i][0] += 32;
		}
		if (i == word) {
			for (int j = 1; j < strlen(name[i]); j++) {
				if (name[i][j] >= 'A' && name[i][j] <= 'Z') {
					name[i][j] += 32;
				}
			}
			printf("%s", name[i]);
		} else {
			printf("%c", name[i][0]);
		}
		
	}
	printf("@ptit.edu.vn");
	
	return 0;
}