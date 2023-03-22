#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 100

int main(){
	int rows, columns;
	scanf("%d %d", &rows, &columns);
	
	int a[rows][columns];
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			scanf("%d", &a[i][j]);
		}	
	}
	
	for(int i = 0; i < columns; i++) {
		for (int j = 0; j < rows; j++) {
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
	
	
	return 0;
}