#include <stdio.h>
#include <math.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}



int main () {
	int n;
	scanf("%d", &n);
	
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
		swap(&a[i][i], &a[i][n - i - 1]);
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0; 
}