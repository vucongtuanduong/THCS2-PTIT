#include<stdio.h>
#include<math.h>
#include <stdbool.h> //update bool data type

long long productDigit(int input_number) {
	long long res = 1;
	while (input_number > 0) {
		res *= input_number % 10;
		input_number /= 10;
	}
	return res;
}


int main(){
	
	int input_number;
	scanf("%d", &input_number);
	
	long long res = productDigit(input_number);
	
	printf("%lld" , res);
	
	return 0;
}