#include<stdio.h>
#include<math.h>
#include<stdbool.h>

//lam lai lan 1





int main(){
	int inputNumber;
	scanf("%d", &inputNumber);
	
	int startDigit = 0;
	int endDigit = inputNumber % 10;
	
	while (inputNumber > 0) {
		startDigit = inputNumber % 10;
		inputNumber /= 10;
	}
	printf("%d %d", startDigit, endDigit);
	return 0;
}