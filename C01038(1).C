#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//lam lai lan 1
void swapFirstEndDigit(int n) {
	int swap = 0;
	int endDigit = n % 10;
	int digits = (int)log10(n);// number of digits -1
	int firstDigit = n / (pow(10, digits));
//	swap += endDigit;
	swap += endDigit * pow(10, digits);
	swap += (n % (int)(pow(10, digits)));
	swap += firstDigit - endDigit;
	printf("%d", swap);
}

// Main function
int main() {
  	int n;
  	scanf("%d", &n);
  	swapFirstEndDigit(n);
  

  	return(0);
}