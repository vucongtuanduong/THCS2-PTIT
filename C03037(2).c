#include <stdio.h>
#include <math.h>


#define MAX_DIGIT_VALUE 10

int is_prime(int n) {
	if (n < 2) {
		return 0;
	} else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				return 0;
			}
		}
	}
	return 1;
}

void count_prime_digits(long long n) {
	int fre[MAX_DIGIT_VALUE] = {0};
	
	while (n > 0) {
		int digit = n % 10;
		if (is_prime(digit)) {
			fre[digit]++;
		}
		n /= 10;
	}
	
	if (fre[2] > 0) {
		printf("2 %d\n", fre[2]);
	}
	if (fre[3] > 0) {
		printf("3 %d\n", fre[3]);
	}
	if (fre[5] > 0) {
		printf("5 %d\n", fre[5]);
	}
	if (fre[7] > 0) {
		printf("7 %d\n", fre[7]);
	}
	
}




// lam lai lan 2
int main() {
	long long n;
	scanf("%lld", &n);
	count_prime_digits(n);
	return 0;
}