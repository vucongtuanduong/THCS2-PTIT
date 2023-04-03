#include<stdio.h>
#include<math.h>
#include<stdbool.h>

#define ll long long

bool isPalindrome(ll n) {
	ll reversed = 0;
	ll x = n;
	while (x > 0) {
		reversed = reversed * 10 + x % 10;
		x /= 10;
	}
	if (reversed == n) {
		return true;
	} else {
		return false;
	}
}

bool sumDigit(ll n) {
	ll sum = 0;
	while (n > 0) {
		int digit = n % 10;
		if (digit % 2 == 0) {
			return false;
		}
		sum += digit;
		n /= 10;
	}
	if (sum % 2 == 0) {
		return false;
	} else {
		return true;
	}
}

bool check(ll n) {
	if (isPalindrome(n) && sumDigit(n)) {
		return true;
	} else {
		return false;
	}
}

int main(){


	int testCase;
	scanf("%d", &testCase);
	
	while (testCase--) {
		ll n;
		scanf("%lld", &n);
		if (check(n)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	return 0;
}
