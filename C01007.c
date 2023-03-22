#include<stdio.h>

int main(){
	
	unsigned long long a, b;
	scanf("%llu%llu", &a, &b);
	
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	
	long long product = a * b;
	int integer_division = a / b;
	double real_division = 1.0*a/b;
	
	printf("%lld\n", product);
	printf("%d\n", integer_division);
	printf("%d\n", a % b);
	printf("%.2f", real_division);
	
	return 0;
}