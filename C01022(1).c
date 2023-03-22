#include<stdio.h>
#include<math.h>
#include<stdbool.h>
// lam lai lan 1

int sumDigit(int n) {
	int res = 0;
	while(n > 0) {
		res += (n % 10);
		n /= 10;
	}
	return res;
}

int main(){
	
	int test_case;
	scanf("%d", &test_case);
	
	while(test_case -- > 0) {
		int inputNumber;
		scanf("%d", &inputNumber);
		int res = sumDigit(inputNumber);
		printf("%d\n", res);
	}
	
	return 0;
}