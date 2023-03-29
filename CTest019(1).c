#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_SIZE 105

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void change_column(int a[MAX_SIZE][MAX_SIZE], int index_column, int rows, int columns) {
	int min_index;
	for (int i = 1; i < rows; i++) {
		min_index = i;
		for (int j = i + 1; j <= rows; j++) {
			if (a[j][index_column] < a[min_index][index_column]) {
				min_index = j;
			}
		}
		if (min_index != i) {
			swap(&a[i][index_column], &a[min_index][index_column]);
		}
	}
}
void print_array(int a[MAX_SIZE][MAX_SIZE], int rows, int columns) {
	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= columns; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
} 

//lam lai lan 1
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int rows, columns, index_column;
		scanf("%d %d %d", &rows, &columns, &index_column);
		int a[MAX_SIZE][MAX_SIZE];
		for (int i = 1; i <= rows; i++) {
			for (int j = 1; j <= columns; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		change_column(a, index_column, rows, columns);
		print_array(a, rows, columns);
	}
	return 0;
}