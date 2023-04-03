#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		double res = 0;
		scanf("%d", &n);
		if (n % 2 == 0) {
			for (int i = 2; i <= n; i+= 2) {
				res += 1.0/i;
			}
		} else {
			for (int i = 1; i <= n; i+= 2) {
				res += 1.0/i;
			}
		}
		printf("%.6f\n", res);
	}
	
	
	return 0;
}