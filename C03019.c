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

long long sumDigit(long long n) {
	long long res = 0;
	while (n > 0) {
		res += (n % 10);
		n /= 10;
	}
	return res;
}

bool check(long long n){
	long long res = sumDigit(n);
	if (isPalindrome(n) && (res % 10 == 0)) {
		return true;
	} else {
		return false;
	}
}

int main(){
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		scanf("%d", &n);
		long long a = pow(10, n - 1);
		long long b = pow(10, n);
		
		long long count = 0;
		for (int i = a; i < b; i++) {
			if (check(i)){
				count++;
			}
		}
		printf("%lld\n", count);
	}
	
	return 0;
}