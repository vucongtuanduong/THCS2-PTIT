#include<stdio.h>
#include<math.h>
#include <stdbool.h> //update bool data type

int sumOfDivisor(int input_number) { //trong bai nay chi tinh tong uoc nho hon chinh no
	int res = 0;
	for(int i = 1; i <= sqrt(input_number); i++) {
		if (input_number % i == 0) {
			res = res + i + input_number / i;
		}
	}
	res -= input_number;
	int sqrtN = sqrt(input_number);
	if (sqrtN * sqrtN == input_number ) {
		res -= sqrtN;
	}
	return res;
}


bool checkPerfectNumber(int input_number) {
	int sum = sumOfDivisor(input_number);
	if (sum == input_number) {
		return true;
	} else {
		return false;
	}
}

int main(){
	
	int input_number;
	scanf("%d", &input_number);
//	int n = sumOfDivisor(input_number);
//	printf("%d\n", n);
	
	if (checkPerfectNumber(input_number)) {
		printf("1");
	} else {
		printf("0");
	}
	
	return 0;
}