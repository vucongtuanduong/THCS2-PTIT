#include <stdio.h>

int main () {
	int m, n, p, q;
	scanf("%d %d %d %d", &m, &n, &p, &q);
	int a[m][n];
	int b[n][p];
	int c[p][q];
	int res1[m][p];
	int res[m][q];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	for (int i = 0; i < p; i++) {
		for (int j = 0; j < q; j++) {
			scanf("%d", &c[i][j]);
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < p; j++) {
			res1[i][j] = 0;
			for (int k = 0; k < n; k++) {
				res1[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < q; j++) {
			res[i][j] = 0;
			for (int k = 0; k < p; k++) {
				res[i][j] += res1[i][k] * c[k][j];
			}
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < q; j++) {
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}
}