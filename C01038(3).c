#include <stdio.h>
#include <math.h>

void change(int n) {
	int last_digit = n % 10;
	int digits = (int)log10(n);
	int first_digit = (n / pow(10, digits));
	int x = pow(10, digits);
	int middle = n % x; // n after deleting first_digit
//	printf("%d %d", first_digit, middle);
	int swapped_number = pow(10, digits) * last_digit + middle + first_digit - last_digit;
	printf("%d", swapped_number);	
}

// lam lai lan 3
int main () {
	int n;
	scanf("%d", &n);
	change(n);
	return 0;
} 