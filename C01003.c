#include<stdio.h>
#include<math.h>

int main(){
	
	int num_tests;
	scanf("%d", &num_tests);
	
	long long res [num_tests];
	
	for(int i = 0; i < num_tests; i++) {
		scanf("%lld", &res[i]);
		res[i] = res[i] * res[i];
	}
	
	for(int i = 0; i < num_tests; i++) {
		printf("%lld\n", res[i]);
	}
	
	return 0;
}