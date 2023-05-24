#include <stdio.h>
void count(int a[], int n) {
	int cnt = 0;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] == a[i + 1]) {
			cnt++;
		}
	}
	printf("%d\n", cnt);
}
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
		count(a, n);
	}
}