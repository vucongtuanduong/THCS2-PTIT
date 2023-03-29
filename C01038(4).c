#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int change(int n) {
	int last_digit = n % 10;
	int digits = (int)log10(n);
	int x = pow(10, digits);
	int first_digit = n / x;
	int middle = n % x - last_digit;
	int res = last_digit * x + middle + first_digit;
	return res;
}

// lam lai lan 4
int main(){
	int number;
	scanf("%d", &number);
	printf("%d", change(number));
	return 0;
}
