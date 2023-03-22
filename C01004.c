#include<stdio.h>

int main(){
	int num_tests;
	scanf("%d", &num_tests);
	
	double res[num_tests];
	long long input_number = 0;
	
	for(int i = 0; i < num_tests; i++) {
		scanf("%lld", &input_number);
		res[i] = 1.0/input_number;
	}
	
	for(int i = 0; i < num_tests; i++) {
		printf("%.15f\n", res[i]);
	}
	
	return 0;
}