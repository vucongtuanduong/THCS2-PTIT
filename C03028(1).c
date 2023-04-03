#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_ROW 10
#define MAX_COLUMN 10


// lam lai lan 1
int main(){
	int n;
	scanf("%d", &n);
	int a[MAX_ROW][MAX_COLUMN];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				a[i][j] = 1;
			} else {
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
