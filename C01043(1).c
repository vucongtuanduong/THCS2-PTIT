#include<stdio.h>
#include<math.h>
#include<stdbool.h>

//lam lai lan 1

int factorial(int n) {
	int res = 1;
	for(int i = 1; i <= n; i++) {
		res *= i;
	}
	return res;
}

bool check(int n) {
	int res = 0;
	int x = n;
	while (n > 0) {
		int digit = n % 10;
		res += factorial(digit);
		n /= 10;
	}
	if (res == x) {
		return true;
	} else {
		return false;
	}
}

int main(){
	int inputNumber;
	scanf("%d", &inputNumber);
	
	if (check(inputNumber)) {
		printf("1");
	} else {
		printf("0");
	}
	
	return 0;
}