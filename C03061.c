#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(long long n) {
	long long reversed = 0;
	long long x = n;
	while (n > 0) {
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}
	if (reversed == x) {
		return true;
	} else {
		return false;
	}
}

bool check(long long n) {
	int digits = (int)log10(n);
	int lastDigit = n % 10;
	int firstDigit = n / pow(10, digits);
	if ((firstDigit * 2) != lastDigit && (lastDigit * 2) != firstDigit) {
		return false;
	} else {
		long long 
		middleDigits = pow(10, digits);
		long long middle = (n % middleDigits) / 10;
		if (isPalindrome(middle) == false) {
			return false;
		} else {
			return true;
		}
	}
}

int main() {
	
	
	int test;
	scanf("%d\n", &test);
	
	while (test--) {
		long long n;
		scanf("%lld", &n);
		if (check(n)) {
			printf("YES\n");
			
		} else {
			printf("NO\n");
		}
	}
	
	
	
	
	return 0;
}