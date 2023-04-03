#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 100

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}


void sortColumn(int a[MAX_SIZE][MAX_SIZE], int rows, int columns, int index) {

	for (int i = 0; i < rows - 1; i++) {
		int min_index = i;
		for (int j = i + 1; j < rows; j++) {
			if (a[j][index] < a[min_index][index]) {
				min_index = j;
			}
		}
		swap(&a[i][index], &a[min_index][index]);
	}
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int main() {
	
	int test;
	scanf("%d", &test);
	
	while (test--) {
		int rows, columns;
		scanf("%d %d", &rows, &columns);
		int a[MAX_SIZE][MAX_SIZE];
		int index;
		scanf("%d", &index);
		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++ ) {
				scanf("%d", &a[i][j]);
			}
		}
		sortColumn(a, rows, columns, index - 1);
		
		
	}
	
	
	return 0;
}
