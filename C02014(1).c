#include <stdio.h>
#include <math.h>
//lam lai lan 1
int main () {
	int n;
	scanf("%d", &n);
	for (int i = - n + 1; i <= n - 1; i++) {
		for (int j = - n + 1; j <= n - 1; j++) {
			if (abs(j) >= abs(i)) {
				printf("%d", abs(j) + 1);
			} else {
				printf("%d", abs(i) + 1);
			}
		}
		printf("\n");
	}
	return 0;
}