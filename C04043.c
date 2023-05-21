#include <stdio.h>
int check_square(long long a, long long b, long long c) {
	long long res1 = a * a;
	long long res2 = b * b;
	long long res3 = c * c;
	if (res1 + res2 == res3 || res1 + res3 == res2 || res2 + res3 == res1) {
		return 1;
	} else {
		return 0;
	}
}
int check(long long a[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if (check_square(a[i], a[j], a[k]) == 1) {
					return 1;
				}
			}
		}
	}
	return 0;
}
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		scanf("%d", &n);
		long long a[n];
		for (int i = 0; i < n; i++) {
			scanf("%lld", &a[i]);
			a[i] *= a[i];
		}
		int ok = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				long long x = a[i] + a[j];
				if (sqrt(x) == (int)sqrt(x)) {
					for (int k = 0; k < n; k++) {
						if (a[k] == x) {
							printf("YES\n");
							ok = 1;
							break;
						}
					}
					break;
				}
				
			}
			if (ok == 1) {
				break;
			}
		}
		if (ok == 0) {
			printf("NO\n");
		}
	}
}