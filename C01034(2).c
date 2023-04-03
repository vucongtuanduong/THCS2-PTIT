#include <stdio.h>
#include <math.h>




// lam lai lan 2
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int sqrtA = sqrt(a);
	int sqrtB = sqrt(b);
	if (sqrtA * sqrtA != a) {
		sqrtA++;
	}
	int res[sqrtB - sqrtA + 1];
	int count = 0;
	for (int i = sqrtA; i <= sqrtB; i++) {
		count++;
	}
	printf("%d\n", count);
	for (int i = sqrtA; i <= sqrtB; i++) {
		printf("%d\n", i * i);
	}
	return 0;
}