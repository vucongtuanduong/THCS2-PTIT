#include<stdio.h>
#include<math.h>

void primeFactor(int n) {
	for(int i = 2; i <= sqrt(n); i++) {
		while (n % i == 0) {
		printf("%d ", i);
		n /= i;
		}
	}
	
	if (n != 1) {
		printf("%d", n);
	}
	
	
}

int main(){
	int testCase;
	scanf("%d", &testCase);
	
	while (testCase--) {
		int input;
		scanf("%d", &input);
		primeFactor(input);
		printf("\n");
	}
	
	return 0;
}