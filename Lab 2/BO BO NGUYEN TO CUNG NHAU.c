#include <stdio.h>
#include <math.h>
int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int check(int a, int b, int c) {
	int gcd1 = gcd(a, b);
	int gcd2 = gcd(b, c);
	int gcd3 = gcd(a, c);
//	printf("%d %d %d\n", gcd1, gcd2, gcd3);
	if (gcd1 == 1 && gcd2 == 1 && gcd3 == 1) {
		return 1;
	} else {
		return 0;
	}
}
void print(int a, int b) {
	for (int i = a; i <= b; i++) {
		for (int j = i + 1; j <= b; j++) {
			for (int k = j + 1; k <= b; k++) {
				if (check(i, j, k)) {
					printf("(%d, %d, %d)\n", i, j, k);
				}
			}
		}
	}
}
int main () {
	int l, r;
	scanf("%d %d", &l, &r);
	print(l, r);
}