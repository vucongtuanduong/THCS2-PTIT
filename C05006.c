#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
	
	int rows, columns;
	scanf("%d %d", &rows, &columns);
	int a[rows][columns];
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			scanf("%d", &a[i][j]);	
		}
	}
	
	int rowSwap1, rowSwap2;
	scanf("%d %d", &rowSwap1, &rowSwap2);
	
	for (int i = 0; i < rows; i++) {
		if (i == (rowSwap1 - 1)) {
				for (int k = 0; k < columns; k++) {
					printf("%d ", a[rowSwap2 - 1][k]);
				}
				printf("\n");
				continue;
			}
		else if (i == (rowSwap2 - 1)) {
				for (int k = 0; k < columns; k++) {
					printf("%d ", a[rowSwap1 - 1][k]);
				}
				printf("\n");
				continue;
			}
		else {
			for (int k = 0; k < columns; k++) {
				printf("%d ", a[i][k]);
			}
			printf("\n");
		}
		
			
		}
		
	
	
	return 0;
}