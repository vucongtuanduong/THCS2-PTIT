#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 100001
void reverse(char input[], char rev[]) {
	strcpy(rev, input);
	int left = 0;
	int right = strlen(input) - 1;
	while (left < right) {
		char temp = rev[left];
		rev[left] = rev[right];
		rev[right] = temp;
		left++;
		right--;
	}
}

int check_length(char input[]) {
	char rev[MAX];
	reverse(input, rev);
	int n = strlen(input);
	int length = 0;
	for (int i = 1; i < n; i++) {
		
		if (abs(input[i] - input[i - 1]) != abs(rev[i] - rev[i - 1])) {
			return 0;
		}
	}
	return 1;
	
}
void check(char input[]) {
	
	if (check_length(input) ) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		char input[MAX];
		scanf("%s", input);
		check(input);
	}
}