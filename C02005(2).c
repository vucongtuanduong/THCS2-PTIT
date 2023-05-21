#include <stdio.h>

int main () {
	int rows, columns;
	scanf("%d %d", &rows, &columns);
	for (int i = 1; i <= rows; i++) {
		for (int k = 1; k < i; k++) {
			printf("~");
		}
		for (int j = 1; j <= columns; j++) {
			printf("*");
		}
		printf("\n");
	}
}