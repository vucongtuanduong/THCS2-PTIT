#include<stdio.h>

int main(){
	int num_test;
	long long input_number;
	scanf("%d", &num_test);
	long long res[num_test];
	for(int i = 0;i < num_test; i++) {
		scanf("%ld", &res[i]);
		res[i] *= 2;
	}
	
	for(int i = 0;i < num_test; i++) {
		printf("%ld\n", res[i]);
}
	
	return 0;
}