#include <stdio.h>
#include <math.h>

int main () {
	int test;
	scanf("%d", &test);
	for (int z = 1; z <= test; z++) {
		printf("Test %d:\n", z);
		int rows, columns;
		scanf("%d %d", &rows, &columns);
		long long a[rows][columns];
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				scanf("%lld", &a[i][j]);
			}
		}
		long long tranposed_a[columns][rows];
		for (int i = 0; i < columns; i++) {
			for (int j = 0; j < rows; j++) {
				tranposed_a[i][j] = a[j][i];
			}
		}
		long long res[rows][rows];
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < rows; j++) {
				res[i][j] = 0;
				for (int k = 0; k < columns; k++) {
					res[i][j] += a[i][k] * tranposed_a[k][j];
				}
			}
		}
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < rows; j++) {
				printf("%lld ", res[i][j]);
			}
			printf("\n");
		}
//		printf("\n");
		
	}
	return 0;
}