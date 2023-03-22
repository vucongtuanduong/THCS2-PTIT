#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 10000



int main() {
	
	int m, n, p, q;
	scanf("%d%d%d%d", &m, &n, &p, &q);
	long long a[m][n], b[n][p], c[p][q];
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%lld", &a[i][j]);
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			scanf("%lld", &b[i][j]);
		}
	}
	
	
	for (int i = 0; i < p; i++) {
		for (int j = 0; j < q; j++) {
			scanf("%lld", &c[i][j]);
		}
	}
	
	long long res[100][100], res2[100][100];
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < p; j++) {
			res[i][j] = 0;
			for (int k = 0; k < n; k++) {
				res[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < q; j++) {
			res2[i][j] = 0;
			for (int k = 0; k < p; k++) {
				res2[i][j] += res[i][k] * c[k][j];
			}
		}
	}
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < q; j++) {
			printf("%lld ", res2[i][j]);
			
		}
		printf("\n");
	}
	
	return 0;
}


