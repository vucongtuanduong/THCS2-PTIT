#include <stdio.h>
#include <math.h>



//lam lai lan 2
int main () {
	int rows, columns;
	scanf("%d %d", &rows, &columns);
	int a[rows][columns];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int index1, index2;
	scanf("%d %d", &index1, &index2);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (j == index1 - 1) {
				printf("%d ", a[i][index2 - 1]);
			}
			else if (j == index2 - 1) {
				printf("%d ", a[i][index1 - 1]);
			} else {
				printf("%d ", a[i][j]);
			}
			
		}
		printf("\n");
	}
	return 0;
}