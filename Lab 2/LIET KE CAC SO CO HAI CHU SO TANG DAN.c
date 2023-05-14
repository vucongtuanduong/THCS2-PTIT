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
	char num[1001];
	scanf("%s", num);
	char res[1001][1001];
	int current = 0;
	for (int i = 0; i < strlen(num); i+= 2) {
		int n = i;
		for (int j = 0; j < 2; j++) {
			if (n + 1 == strlen(num)) {
				break;
			} else {
				res[current][j] = num[n];
				n++;
			}
		}
		current++;
		
	}
//	for (int i = 0; i < current; i++) {
//		printf("%s ", res[i]);
//	}
	sort(res, current);
	int n = 0;
	for (int i = 0; i < current; i++) {
		int ok = 1;
		for (int j = 0; j < i; j++) {
			if (strcmp(res[i], res[j]) == 0) {
				
				ok = 0;
			} 
		}
		if (ok ==  1) {
			if (strcmp(res[i], "") == 0) {
				//do nothing
			} else if (strlen(res[i]) != 2) {
				//do nothing
			} 
			else {
				printf("%s ", res[i]);
			}
			
		}
		
	}
}