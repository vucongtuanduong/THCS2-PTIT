#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort(char res[][1001], int current) {
	for (int i = 0; i < current; i++) {
		for (int j = i + 1; j < current; j++) {
			if (atoi(res[i]) >= atoi(res[j])) {
				char temp[1001];
				strcpy(temp, res[i]);
				strcpy(res[i], res[j]);
				strcpy(res[j], temp);
			}
		}
	}
}
int main () {

	
	
	//new
	int test;
	scanf("%d", &test);
	char res[1001][1001];
	int current = 0;
	int row = 0;
	while (test--) {
		char s[1001];
		scanf("%s", s);
		if (s[0] >= '1' && s[0] <= '9') {
				res[row][current] = s[0];
				current++;
				row++;
		}
		
		for (int i = 1; i < strlen(s); i++) {
			if (s[i] >= '1' && s[i] <= '9') {
				res[row][current] = s[i];
				current++;
			} else {
				if (s[i - 1] >= '1' && s[i - 1] <= '9') {
					row++;
					current = 0;
				}
				
			}
			if (i == strlen(s) - 1){
				row++;
				current = 0;
			} 
		}
		
	}
	sort(res, row);
	for (int i = 0; i < row; i++) {
		int ok = 1;
		for (int j = 0; j < i; j++) {
			if (strcmp(res[i], res[j]) == 0) {
				ok = 0;
			}
		}
		if (ok == 1) {
			if (strcmp(res[i], "") != 0) {
				printf("%s\n", res[i]);
			}
		}
		
		
	}
}