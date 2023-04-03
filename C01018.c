#include<stdio.h>
#include<math.h>
#include <stdbool.h> //update bool data type

bool isSquareNumber(int n) {
	int sqrtN = sqrt(n);
	
	
	if ((sqrtN * sqrtN) == n) {
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
		int input_number;
		scanf("%d", &input_number);
		
		if(isSquareNumber(input_number)) {
			res[i] = true;
		} else {
			res[i] = false;
		}
	}
	
	for(int i = 0;i < num_tests; i++) {
		
		
		if(res[i] == true) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	return 0;
}