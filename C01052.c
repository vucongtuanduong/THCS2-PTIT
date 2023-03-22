#include<stdio.h>
#include<math.h>
#include <stdbool.h> //update bool data type

int countDivisor2(int n) {
	int count = 0;
	for(int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			int x = n / i;
			if (i % 2 == 0) {
				count++;
			}
			if (x % 2 ==0) {
				count++;
			}
		}
	}
	int sqrtN = sqrt(n);
	if (sqrtN * sqrtN == n && sqrtN % 2 == 0){
		count--;
	}
	return count;
}


int main(){
	
	int num_test;
	scanf("%d", &num_test);
	
	int res[num_test];
	
	for(int i = 0; i < num_test; i++) {
		int input_number;
		scanf("%d", &input_number);
		res[i] = countDivisor2(input_number);
	}
	
	for(int i = 0;i < num_test; i++) {
		printf("%d\n", res[i]);
	}
	
	return 0;
}