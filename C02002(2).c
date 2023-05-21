#include <stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		for (int k = i + 1; k < n; k++) {
			printf("~");
		}
		for (int j = 0; j < n; j++) {
			printf("*");
		}
		printf("\n");
	}
}