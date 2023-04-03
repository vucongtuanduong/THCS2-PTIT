#include<stdio.h>

int main(){
	
	int a, b;
	scanf("%d%d", &a, &b);
	
	if (b == 0) {
		printf("0");
	} else {
		int sum = a + b;
		int sub = a - b;
		long long product = a * b;
		double division = 1.0*a / b;
		int mod = a % b;
		printf("%d ", sum);
		printf("%d ", sub);
		printf("%lld ", product);
		printf("%.2f ", division);
		printf("%d", mod);
	}
	
	return 0;
}