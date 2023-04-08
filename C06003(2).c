#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CHAR 205

int main ()  {
	int test;
	scanf("%d", &test);
	getchar();
	while (test--) {
		char str[MAX_CHAR];
		fgets(str, MAX_CHAR, stdin);
		int count = 0;
		char *token = strtok(str, " ");
		while (token != NULL) {
			++count;
			token = strtok(NULL, " ");
		}
		printf("%d\n", count);
	}
	return 0;
}