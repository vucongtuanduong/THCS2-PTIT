#include <stdio.h>

int main () {
	int rows, columns;
	scanf("%d %d", &rows, &columns);
	int a[rows][columns];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int max = a[0][0];
	int min = a[0][0];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (a[i][j] > max) {
				max = a[i][j];
			} else if (a[i][j] < min) {
				min = a[i][j];
			}
		}
	}
	int diff = max - min;
	int ok = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (a[i][j] == diff ) {
				if (ok == 0) {
					ok = 1;
					printf("%d\n", a[i][j]);
					printf("Vi tri [%d][%d]\n", i, j);
				} else if (ok == 1) {
					printf("Vi tri [%d][%d]\n", i, j);
				}
				
			}
		}
	}
	if (ok == 0) {
		printf("NOT FOUND");
	}
	
}