#include<stdio.h>
#include <math.h>
#include <stdbool.h>

bool check(int n) {
	int sumDigit = 0;
	int x = n;
	int reversed = 0;
	while (n > 0) {
		int digit = n % 10;
		if (digit == 4) {
			return false;
		} else {
			sumDigit += digit;
		}
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}
	if (sumDigit % 10 == 0 && reversed == x) {
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
		int a = pow(10, n - 1);
		int b = pow(10, n); 
		for(int i = a; i < b; i++) {
			if (check(i)) {
				printf("%d ", i);
			}
		}
		printf("\n");
	}
	
	return 0;
}