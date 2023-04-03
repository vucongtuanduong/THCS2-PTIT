#include <stdio.h>
#include <math.h>

int sum_divisors(int n) {
	// sum of divisors but not include n
	int sum = 0;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			sum += i;
			sum += n / i;
		}
	}
	// check if we duplicate one divisor(in case n is a square number)
	int sqrtN = sqrt(n);
	if (sqrtN * sqrtN == n) {
		sum -= sqrt(n);
	}
	sum -= n;
	return sum;
}



int check(int n) {
	int sum = sum_divisors(n);
	if (sum == n) {
		return 1;
	} else {
		return 0;
	}
}

// lam lai lan 2
int main () {
	int n;
	scanf("%d", &n);
	printf("%d", check(n));
	return 0;
} 