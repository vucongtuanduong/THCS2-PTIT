#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPalindrome(int n) {
	int reversed = 0;
	int x = n;
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

bool check9(long long n) {
	while (n > 0) {
		int digit = n % 10;
		if (digit == 9) {
			return false;
		}
		n /= 10;
	}
	return true;
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
	if (isPalindrome(n) && check9(n)) {
		return true;
	} else {
		return false;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int count = 0;
	for (int i = 2; i <= n; i++) {
		if (check(i)) {
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d", count);
	
	
	return 0;
}