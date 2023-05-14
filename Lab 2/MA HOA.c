#include <stdio.h>
#include <string.h>
char p[28] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
#define ORIGIN_LENGTH 28
void reverse(char input[]) {
	int left = 0;
	int right = strlen(input) - 1;
	while (left < right) {
		char temp = input[left];
		input[left] = input[right];
		input[right] = temp;
		left ++;
		right--;
	}
}
int find_index(char c) {
	for (int i = 0; i < ORIGIN_LENGTH; i++) {
		if (p[i] == c) {
			return i;
		}
	}
	return -1;
}
void implement(char input[], int k) {
	for (int i = 0; i < strlen(input); i++) {
		input[i] = p[(find_index(input[i]) + k) % 28];
	}
	reverse(input);
	printf("%s\n", input);
}
int main () {
	
	while (1) {
		int k;
		char s[10001];
		
		scanf("%d", &k);
		if (k == 0) {
			break;
		}
		scanf("%s", s);
		implement(s, k);
	}
}