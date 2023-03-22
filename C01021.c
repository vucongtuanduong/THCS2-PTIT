#include<stdio.h>

long long sumDigit(long long input_number) {
	long long res = 0;
	while(input_number > 0) {
		res += input_number % 10;
		input_number /= 10;
	}
	return res;
}

int main(){
	
	long long input_number;
	scanf("%lld", &input_number);
	
	long long res = sumDigit(input_number);
	printf("%lld", res);
	return 0;
}