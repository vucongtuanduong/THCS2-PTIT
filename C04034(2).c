#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		scanf("%d", &n);
		int a[n];
		int res[n];
		int count = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int max = a[n - 1];
		res[count++] = a[n - 1];
		for (int i = n - 2; i >= 0; i--) {
			if (a[i] > max) {
				max = a[i];
				res[count++] = a[i];
			}
		}
		for (int i = count - 1; i >= 0; i--) {
			printf("%d ", res[i]);
		}
		printf("\n");
	}
}