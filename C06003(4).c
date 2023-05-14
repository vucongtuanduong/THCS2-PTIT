#include <stdio.h>
#include <string.h>
int main () {
	
	int test;
	scanf("%d", &test);
	scanf("\n");
	while (test--) {
		char str[201];
		gets(str);
		char *token = strtok(str, " ");
		int count = 0;
		while (token != NULL) {
			count++;
			token = strtok(NULL, " ");
		}
		printf("%d\n", count);
	}
}