#include <stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int init = 1;
		for (int j = 0; j < i + 1; j++) {
			printf("0 ");
		}
		for (int j = i + 1; j < n; j++) {
			printf("%d ", init++);
		}
		printf("\n");
	}
}