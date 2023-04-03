#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 100

int main(){
	int test;
	scanf("%d", &test);
	
	for (int k = 1; k <= test; k++) {
		printf("Test %d:\n", k);
		int rows, columns;
		scanf("%d %d", &rows, &columns);
		
		int a[rows][columns];
		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				scanf("%d", &a[i][j]);
			}	
		}
		
		for(int i = 1; i < rows; i++) {
			for (int j = 1; j < columns; j++) {
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	
	
	return 0;
}