#include <stdio.h>
#include <math.h>





int main() {
	int n;
	scanf("%d", &n);
	int init;
	for (int i = 1; i <= n; i++) {
		init = 2 * i;
		if (i % 2 == 0) {
			for (int j = 2; j <= 2 * i; j += 2) {
				printf("%d", j);
			}
		} else {
			for (int j = 1; j < 2 * i + 1; j += 2) {
				printf("%d", j);
			}
		}
		printf("\n");
	}
	return 0;
}