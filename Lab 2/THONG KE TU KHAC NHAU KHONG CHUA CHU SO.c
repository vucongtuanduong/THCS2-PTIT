#include <stdio.h>
#include <string.h>
void delete_char(char res[], char c, int index) {
	for (int i = index; i < strlen(res) - 1; i++) {
		res[i] = res[i + 1];
	}
}
void check_number(char res[][501], int current) {
	for (int i = 0; i < current; i++) {
		int n = strlen(res[i]);
		for (int j = 0; j < n; j++) {
			if (res[i][j] >= '0' && res[i][j] <= '9') {
				delete_char(res[i], res[i][j], j);
			}
		}
	}
}
void implement(char res[][501], int current) {
	check_number(res, current);
	int ok[501] = {0};
	for (int i = 0; i < current; i++) {
		int n = strlen(res[i]);
		
		int count = 1;
		for (int j = 0; j < n; j++) {
			if (res[i][j] != "\0") {
				break;
			}
		}
		if (ok[i] == 0) {
			int count = 1;
			for (int k = i + 1; k < current; k++) {
				if (strcmp(res[i], res[k]) == 0) {
					count++;
					ok[k] = 1;
				}
			}
			printf("%s %d\n", res[i], count);
		}
	}
}
int main () {
	int n;
	scanf("%d", &n);
	scanf("\n");
	while (n --) {
		char s[501];
		char res[1001][501];
		int current = 0;
		gets(s);
		char *token = strtok(s, ",.?!:;)-/");
		while (token != NULL) {
			strcpy(res[current++], token);
			token = strtok(NULL, ",.?!:;)-/");
		}
	}

} 