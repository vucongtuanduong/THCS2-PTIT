#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strcmp1(char a[], char b[]) {
	int n1 = strlen(a);
	int n2 = strlen(b);
	if (n1 != n2) {
		return 0;
	}
	for (int i = 0; i < n1; i++) {
		if (tolower(a[i]) != tolower(b[i])) {
			return 0;
		}
	}
	return 1;
}

void deleted(char input[], char s[]) {
	char *token = strtok(input, " ");
	while (token != NULL) {
		if (strcmp1(token, s) == 0) {
			printf("%s ", token);
		}
		token = strtok(NULL, " ");
	}
}

int main () {
	
	int test;
	scanf("%d", &test);
	scanf("\n");
	for (int z = 1; z <= test; z++) {
		
		char input[201];
		char s[21];
		gets(input);
		scanf("%s", s);
		getchar();
		printf("Test %d: ", z);
		deleted(input, s);
		printf("\n");
}
	
}