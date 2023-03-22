#include<stdio.h>

int main(){
	
	unsigned int input_number;
	scanf("%u", &input_number);
	
	for(int i = 1;i <= 10; i++) {
		printf("%u ", input_number * i);
	}
	
	return 0;
}