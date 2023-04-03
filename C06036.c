#include <stdio.h>
#include <string.h>

#define MAX_CHAR_LENGTH 100005

int main() {
	char str[MAX_CHAR_LENGTH];
	
	gets(str);
	int n = strlen(str) - 1;
	printf("%d", n);
	
	return 0;
}