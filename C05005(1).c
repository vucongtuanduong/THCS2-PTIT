#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	for (int z = 1; z <= test; z++) {
		printf("Test %d:\n", z);
		int rows, columns;
		scanf("%d %d", &rows, &columns);
		int a[rows][columns];
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				scanf("%d", &a[i][j]);
				if (i != 0 && j != 0) {
					printf("%d ",a[i][j]);
				}
			}
			printf("\n");
		}
	}
}