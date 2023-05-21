#include <stdio.h>
void change_mat(int a[][101], int rows, int columns) {
	int res[101][101];
	for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				res[j][i] = a[i][j];
			}
	}
	for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				a[i][j] = res[i][j];
			}
	}
}
void sort(int a[][101], int rows, int columns, int index) {
	for (int i = 0; i < rows; i++) {
		for (int j = i + 1; j < rows; j++) {
			if (a[i][index - 1] > a[j][index - 1]) {
				int temp = a[i][index - 1];
				a[i][index - 1] = a[j][index - 1];
				a[j][index - 1] = temp;
			}
		}
	}
}
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int rows, columns;
		int index;
		scanf("%d %d %d", &rows, &columns, &index);
		int a[101][101];
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				scanf("%d", &a[i][j]);
			}
		}

		sort(a, rows, columns, index);

		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}	

 
}