#include<stdio.h>
#include<math.h>
#include<stdbool.h>

#define ll long long

bool isPrime(int n) {
	if (n < 2) {
		return false;
	} else {
		for(int i = 2; i <= sqrt(n); i++) {
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
		while (n > 0) {
		int digit = n % 10;
		if (isPrime(digit) == false) {
			return false;
			} 
			n /= 10;
		}
	}
	return true;
}


int main(){


	int testCase;
	scanf("%d", &testCase);
	
	while (testCase--) {
		int a, b;
		scanf("%d %d", &a, &b);
		int count = 0;
		for(int i = a; i <= b; i++) {
			if (check(i)) {
				count++;
			}
		}
		printf("%d\n", count);
	}
	
	return 0;
}