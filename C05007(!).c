#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_SIZE 100000


// lam lai lan 1
int main() {
	int rows, columns;
	scanf("%d %d", &rows, &columns);
	int a[rows][columns];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			scanf("%d", &a[i][j]);
			
		}
	}
	
	int swapCol1, swapCol2;
	scanf("%d %d", &swapCol1, &swapCol2);
	
	for (int i = 0; i < rows; i++) {
		int temp = a[i][swapCol1 - 1];
		a[i][swapCol1 - 1] = a[i][swapCol2 - 1];
		a[i][swapCol2 - 1] = temp;
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			printf("%d ", a[i][j]);
			
		}
		printf("\n");
	}
	
	return 0;
}