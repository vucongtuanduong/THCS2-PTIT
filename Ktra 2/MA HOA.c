#include <stdio.h>
#include <string.h>
char p[29] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
void reverse(char input[]) {
	int l = 0;
	int r = strlen(input) - 1;
	while (l < r) {
		char temp = input[l];
		input[l] = input[r];
		input[r] = temp;
		l++;
		r--;
	}
}
int find_index(char c) {
	for (int i = 0; i < strlen(p); i++) {
		if (p[i] == c) {
			return i;
		}
	}
	return -1;
}
void encode(char input[], int k) {
	for (int i = 0; i < strlen(input); i++) {
		input[i] = p[(find_index(input[i]) + k) % 28];
	}
	reverse(input);
	printf("%s\n", input);
}
int main () {
	int k;
	while (1) {
		scanf("%d", &k);
		if (k == 0) {
			break;
		}
		char input[1001];
		scanf("%s", input);
		encode(input, k);
	}
}