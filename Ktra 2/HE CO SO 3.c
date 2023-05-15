#include <stdio.h>
#include <string.h>
int check(char input[]) {
	for (int i = 0; i < strlen(input); i++) {
		if (input[i] != '0' && input[i] != '1' && input[i] != '2') {
			return 0;
		}
	}
	return 1;
}
void implement(char input[]) {
	if (check(input)) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		char input[19];
		scanf("%s", input);
		implement(input);
	}
}