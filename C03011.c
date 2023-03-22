#include<stdio.h>
#include<math.h>
#include<stdbool.h>

#define long long ll

int factorial(int n) {
	int res = 1;
	for(int i = 2; i <= n; i++) {
		res *= i;
	}
	return res;
}






bool check(int n) {
	int res = 0;
	int x = n; 
	while (x > 0) {
		int digit = x % 10;
		res += factorial(digit);
		x /= 10;
	}
	if (res == n) {
		return true;
	} else {
		return false;
	}
}

int main(){
	
	int a, b;
	scanf("%d%d", &a, &b);
	
	if (a > b) {
		for(int i = b; i <= a; i++) {
			if (check(i)) {
				printf("%d ", i);
			}
		}
	} else {
		for(int i = a; i <= b; i++) {
			if (check(i)) {
				printf("%d ", i);
			}
		}
	}

	
	
	return 0;
}