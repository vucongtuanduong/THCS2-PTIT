#include<stdio.h>
#include<math.h>


void primeFactor(int n) {
	for(int i = 2; i <= sqrt(n); i++) {
		while (n % i == 0) {
			printf("%d", i);
			n /= i;
			if (n != 1) {
				printf("x");
			}
		}
		
	}
	if (n != 1) {
		printf("%d", n);
	}
}

int main(){
	
	

		int inputNumber;
		scanf("%d", &inputNumber);
		primeFactor(inputNumber);
		
	
	
	return 0;
}