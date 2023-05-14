#include <stdio.h>
#include <math.h>
void check(int a[][100], int n, int k) {
	int sum_main = 0;
	int sum_sub = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j > i && j != i) {
				sum_main += a[i][j];
			} else if (j < i && j != i){
				sum_sub += a[i][j];
			}
		}
	}
	int diff = abs(sum_main - sum_sub);
	if (diff <= k) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	printf("%d\n", diff);
}
int main () {
	int n;
	scanf("%d", &n);
	int a[n][100];
	int k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d", &k);
	
	check(a, n, k);
}