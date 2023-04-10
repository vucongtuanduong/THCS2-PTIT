#include <stdio.h>
#define MAX_FRE 1000000000
int fre[MAX_FRE] = {0};
int check(int a[], int n) {
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (fre[a[i]] != 0) {
			return a[i];
		} else {
			fre[a[i]]++;
		}
	}
	return -1;
}
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		scanf("%d", &n);
		int a[n];
		int res = check(a, n);
		if (res == -1) {
			printf("NO\n");
		} else {
			printf("%d\n", res);
		}
	}
	return 0;
}