#include <stdio.h>
#define MAX_SIZE 100
int main () {
	int test;
	scanf("%d\n", &test);
	while (test--) {
		char name[MAX_SIZE][MAX_SIZE], input[MAX_SIZE];
		gets(input);
		int word = 0, current_pos = 0;
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
		name[word][current_pos] = 0;
		for (int i = 0; i <= word; i++) {
			if (name[i][0] >= 'a' && name[i][0] <= 'z') {
				name[i][0] -= 32;
			}
			for (int j = 1; j < strlen(name[i]); j++) {
				if (name[i][j] >= 'A' && name[i][j] <= 'Z') {
					name[i][j] += 32;
				}
			}
			printf("%s ", name[i]);
		}
		printf("\n");
	}
	
	return 0;
}