#include<stdio.h>
#include <stdbool.h>
#include<math.h>

bool isPrime(unsigned int input_number) {
	if (input_number < 2) return false;
	else {
		for(int i = 2; i <= sqrt(input_number); i++) {
			if (input_number % i == 0) {
				return false;
			}
		}
	}
	return true;
}

int main(){
	
	int num_tests;
	scanf("%d", &num_tests);
	
	bool res[num_tests];
	
	for(int i = 0;i < num_tests; i++) {
		unsigned int input_number;
		scanf("%u", &input_number);
		res[i] = isPrime(input_number);
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