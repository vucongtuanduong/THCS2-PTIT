#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int count = 0;
		for (int i = 0; i < n - 1; i++) {
			if (a[i + 1] == a[i]) {
				count++;
			}
		}
		printf("%d\n", count);
	}
	
	return 0;
}