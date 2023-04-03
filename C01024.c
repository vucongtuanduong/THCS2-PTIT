#include<stdio.h>
#include <stdbool.h>

bool startEndDigit(unsigned int input_number) {
	int startDigit = 0;
	int endDigit = input_number % 10;
	while(input_number > 0) {
		startDigit = input_number % 10;
		input_number /= 10;
	}
	if (startDigit == endDigit) {
		return true;
	} else {
		return false;
	}
}

int main(){
	
	int num_tests;
	scanf("%d", &num_tests);
	
	bool res[num_tests];
	
	for(int i = 0;i < num_tests; i++) {
		unsigned int input_number;
		scanf("%u", &input_number);
		res[i] = startEndDigit(input_number);
	}
	
	for(int i = 0;i < num_tests; i++) {
		if (res[i] == true) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
		
	}
	
	
	return 0;
}