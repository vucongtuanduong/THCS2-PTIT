#include <stdio.h>
#include <math.h>


int check(int n, int k) {
	int count = 0;
	for (int i = 2; i <= n; i++) {
		int temp = i;
		while (temp % 2 == 0) {
			count++;
			temp /= 2;
			if (count == k) {
				return 1;
			}
		}
		if (count == k) {
			return 1;
		}
	}
	if (count == k) {
		return 1;
	}
	return 0;
}

// lam lai lan 2
int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	if (check(a, b) == 1) {
		printf("Yes");
	} else {
		printf("No");
	}
	return 0;
}