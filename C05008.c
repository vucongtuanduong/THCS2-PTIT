#include <stdio.h>
#include <math.h>

#define SMALLEST_VALUE -99999

int main () {
	int test;
	scanf("%d", &test);
	for (int z = 1; z <= test; z++) {
		
		int rows, columns;
		scanf("%d %d", &rows, &columns);
		int a[rows][columns];
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		int max = SMALLEST_VALUE;
		int max_row, max_column;
		int temp;
//		printf("Max = %d\n", max);
		for (int i = 0; i < rows; i++) {
			temp = 0;
			for (int j = 0; j < columns; j++) {
				temp += a[i][j];
			}
			if (temp > max) {
				max = temp;
				max_row = i;
			}
		}
		max = SMALLEST_VALUE;
		for (int j = 0; j < columns; j++) {
			temp = 0;
			for (int i = 0; i < rows; i++) {
				if (i == max_row) {
					continue;
				}
				temp += a[i][j];
			}
			if (temp > max) {
				max = temp;
				max_column = j;
			}
		}
		printf("Test %d:\n", z);
		for (int i = 0; i < rows; i++) {
			if (i == max_row) {
				continue;
			}
			for (int j = 0; j < columns; j++) {
				
				if (j == max_column) {
					continue;
				}
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}