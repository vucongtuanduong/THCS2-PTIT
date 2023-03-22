#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int n) {
	if (n < 2) {
		return false;
	} else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				return false;
			}
		}
	}
	return true;
}


bool check(int n) {
	if (isPrime(n) == false) {
		return false;
	} else {
		int sum = 0;
		while (n > 0) {
			int digit = n % 10;
			if (isPrime(digit) == false) {
				return false;
			}
			sum += digit;
			n /= 10;
		}
		if (isPrime(sum) == false) {
			return false;
		} else {
			return true;
		}
	}
}

int main(){
	int test;
	scanf("%d", &test);
	
	while (test--) {
		int a, b;
		int count = 0;
		scanf("%d %d", &a, &b);
		for (int i = a; i <= b; i++) {
			if (check(i)) {
				count++;
			}
		}
		printf("%d\n", count);	
	}
	
	return 0;
}