#include<stdio.h>
#include<math.h>


void swapFirstLastDigit(int n){
	int lastDigit = n % 10;
	int digits = (int)log10(n); //reduce  1 the digit 
	int firstDigit = n / (pow(10,digits));
	
	int swapNumber = lastDigit;
	swapNumber *= pow(10, digits);
	
	swapNumber += (n % (int)pow(10, digits));
	swapNumber -= lastDigit;
	swapNumber += firstDigit;
	printf("%d", swapNumber);
}

int main(){
	int n;
	scanf("%d", &n);
	
	swapFirstLastDigit(n);
	
	
	return 0;
}