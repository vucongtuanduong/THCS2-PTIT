#include<stdio.h>
#include<math.h>
#include <stdbool.h> //update bool data type

int factorial(int n) {
	int res = 1;
	for(int i = 1; i <= n; i++) {
		res *= i;
	}
	return res;
}

int factorialDigits(int n) {
	int res = 0;
	while(n > 0) {
		res += factorial(n%10);
		n /= 10;
	}
	return res;
}



bool isStrongNumber(int n) {
	int res = factorialDigits(n);
	if (res == n) {
		return true;
	} else {
		return false;
	}
}


int main(){
	
	int input_number;
	scanf("%d", &input_number);
	
	if(isStrongNumber(input_number)) {
		printf("1");
	} else {
		printf("0");
	}

	return 0;
}