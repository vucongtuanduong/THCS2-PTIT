#include <stdio.h>
#include <math.h>
#include <stdbool.h>

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

bool check6(long long n) {
	while (n > 0) {
		int digit = n % 10;
		if (digit == 6) {
			return true;
		}
		n /= 10;
	}
	return false;
}

long long sumDigit(long long n){
	long long res = 0;
	while (n > 0) {
		res += (n % 10);
		n /= 10;
	}
	return res;
}

bool check(long long n){
	long long res = sumDigit(n);
	if (isPalindrome(n) && check6(n) && (res % 10 == 8)) {
		return true;
	} else {
		return false;
	}
}

int main(){
	long long a, b;
	scanf("%lld %lld",&a, &b);

	if (b < a) {
		for (long long i = b; i <= a; i++){
		if (check(i)) {
			printf("%lld ", i);
			}
		}
		
	}
	else {
		for (int i = a; i <= b; i++){
		if (check(i)) {
			printf("%lld ", i);
			}
		}
		
	}
	
	
	return 0;
}