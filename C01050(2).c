#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


// lam lai lan 2
int main(){
	int rows, columns;
	scanf("%d %d", &columns, &rows);
	for (int i = 0; i < rows; i++) {
		
		for (int j = 0; j < columns; j++) {
			if (j == 0 || j == columns - 1 || i == 0 || i == rows - 1) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
