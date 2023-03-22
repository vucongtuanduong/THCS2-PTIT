#include<stdio.h>
#include<math.h>
#include <stdbool.h> //update bool data type




int main(){
	
	int num_tests;
	scanf("%d", &num_tests);
	
//	int countOdd = 0;
//	int countEven = 0;
	
	int n = num_tests * 2;
	int res[n];//left: even,right:Odd
	
	for(int i = 0;i < n; i++) {
		res[i] = 0;
	}
	for(int i = 0; i < n; i+=2) {
		int input_number;
		scanf("%d", &input_number);
		while (input_number > 0) {
		if ((input_number % 10 ) % 2 == 0 ) {
			res[i]++;
		} else {
			res[i+1]++;
		}
		input_number /= 10;
	}
	}
	
	for(int i = 0; i < n; i+=2) {
		printf("%d %d\n", res[i+1], res[i]);
	}
	
	
	



	return 0;
}