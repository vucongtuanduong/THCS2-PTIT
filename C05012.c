#include <stdio.h>
#include <math.h>
#define MAX_SIZE 20
int main () {
	int test;
	scanf("%d", &test);
	for (int z = 1; z <= test; z++) {
		printf("Test %d:\n", z);
		int rows;
		scanf("%d", &rows);
		int a[MAX_SIZE][MAX_SIZE] = {0};
		int current;
		for (int i = 0; i < rows; i++) {
			current = 1;
			for (int j = 0; j <= i; j++) {
				
				a[i][j] = current;
				current++;
			}
		}
		int tranposed_a[rows][rows];
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < rows; j++) {
				tranposed_a[i][j] = a[j][i];
			}
		}
		int res[rows][rows];
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < rows; j++) {
				res[i][j] = 0;
				for (int k = 0; k < rows; k++) {
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