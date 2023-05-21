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
	int res[columns][rows];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			res[j][i] = a[i][j];
		}
	}
	for (int i = 0; i < columns; i++) {
		for (int j = 0; j < rows; j++) {
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}
 
}