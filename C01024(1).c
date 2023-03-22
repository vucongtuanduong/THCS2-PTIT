#include<stdio.h>
#include<math.h>
#include<stdbool.h>
// lam lai lan 1

bool check(int n) {
	int startDigit = 0;
	int endDigit = n % 10;
	while (n > 0) {
		startDigit = n % 10;
		n /= 10;
	}
	if (startDigit == endDigit) {
		return true;
	} else {
		return false;
	}
}

int main(){
	
	int test_case;
	scanf("%d", &test_case);
	
	while(test_case -- > 0) {
		int inputNumber;
		scanf("%d", &inputNumber);
		if (check(inputNumber)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	return 0;
}