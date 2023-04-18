#include <stdio.h>
#include <string.h>

int count_word(char s[]) {
	char *p = strtok(s, " ");
	int count = 0;
	while (p != NULL) {
		count++;
		p = strtok(NULL, " ");
	}
	return count;
} 

int main () {
	
	int test;
	scanf("%d", &test);
	scanf("\n");
	while (test--) {
		char s[201];
		gets(s);
		printf("%d\n", count_word(s));
	}
}