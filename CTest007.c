#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

bool check(char number[], int length) {
	for (int i = 0; i < length; i++) {
			if (number[i] != '0' && number[i] != '1' && number[i] != '2') {
				return false;
			}
	}
	return true;
}

int main() {
	
	
	int test;
	scanf("%d\n", &test);
	
	while (test--) {
		char number[18];
	
		gets(number);
		int length = strlen(number);
		if (check(number, length)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	
	
	
	return 0;
}