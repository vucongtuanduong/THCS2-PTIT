#include<stdio.h>
#include<math.h>
#include <stdbool.h> //update bool data type

int numDigit(unsigned int input_number) {
	int res = 0;
	while (input_number > 0) {
		res++;
		input_number /= 10;
	}
	return res;
}

int main(){
	
	int input_number;
	scanf("%d", &input_number);
	
	int res = numDigit(input_number);
	printf("%d", res);
	
	return 0;
}