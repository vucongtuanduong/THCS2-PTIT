#include <stdio.h>
#include <math.h>


int change(int n) {
	int lastDigit = n % 10;
	int digits = (int)log10(n);// digits reduced by 1
	int firstDigit = n / (pow(10, digits));
	int x = pow(10, digits);
	int middle = n % x;
	
	int swapped = lastDigit * (int)pow(10, digits) + middle + firstDigit - lastDigit;
	return swapped;
}

// lam lai lan 2
int main () {
	int n;
	scanf("%d", &n);
	printf("%d", change(n));
	
}