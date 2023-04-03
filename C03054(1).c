#include <stdio.h>
#include <math.h>

// lam lai lan 2

long long reverse(long long n) {
	long long res = 0;
	while (n > 0) {
		res = res * 10 + n % 10;
		n /= 10;
	}
	return res;
}

int cut(int digit) {
	if (digit == 0 || digit == 8 || digit == 9) {
		return 0;
	} else if (digit == 1) {
		return 1;
	} else {
		return -1;
	}
}

int count_zero_digit(long long n) {
	int count0 = 0;
	while (n % 10 == 0) {
		count0++;
		n /= 10;
	}
	return count0;
}

long long implement(long long n) {
	long long res = 0;
	
	int count0 = count_zero_digit(n);
	
	n = reverse(n);
	while (n > 0) {
		int digit = n % 10;
		if (cut(digit) == -1) {
			return -1;
		} else {
			res = res * 10 + cut(digit);
			n /= 10;	
		}
	}
	while (count0 > 0) {
		res = res * 10;
		count0 --;
	}
	
	return res;
}
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		long long n;
		scanf("%lld", &n);
		if (implement(n) <= 0) {
			printf("INVALID\n");
		} else {
			printf("%lld\n", implement(n));
		}
	}
	return 0;
}