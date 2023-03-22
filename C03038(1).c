#include <stdio.h>
#include <math.h>

void implement(int n, int p) {
	int res = 0;
	for (int i = p; i <= n; i *= p) {
		res += (int)(n / i);
	}
	printf("%d\n", res);
}

int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int n, p;
		scanf("%d %d", &n, &p);
		implement(n, p);
	}
	return 0;
}