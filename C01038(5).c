#include <stdio.h>
#include <math.h>
void swap(int n) {
	int digits = log10(n);
	int last_digit = n % 10;
	int first_digit = (int)n / (pow(10, digits));
	int x = pow(10, digits);
	int middle = n % x - last_digit;
	int new = last_digit * pow(10, digits) + middle + first_digit;
	printf("%d", new);
}
int main () {
	int n;
	scanf("%d", &n);
	swap(n);
}