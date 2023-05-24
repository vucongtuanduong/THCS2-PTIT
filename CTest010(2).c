#include <stdio.h>
#include <string.h>

int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		char s[101];
		scanf("%s", s);
		int count =  1;
		for (int i = 1; i < strlen(s); i++) {
			if (s[i] == s[i - 1]) {
				count++;
			} else {
				printf("%c%d", s[i - 1], count);
				count = 1;
			}
			
		}
		printf("%c%d\n", s[strlen(s) - 1], count);
	}
}