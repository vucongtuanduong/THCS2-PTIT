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
	
	int num_tests;
	scanf("%d", &num_tests);
	
	long long res[num_tests];
	
	for(int i = 0;i < num_tests; i++) {
		long long input_number;
		scanf("%lld", &input_number);
		res[i] = sumDigit(input_number);
	}
	
	for(int i = 0;i < num_tests; i++) {
		printf("%lld\n", res[i]);
	}
	
	
	return 0;
}