#include<stdio.h>
#include<stdbool.h>



bool check(long long n) {
	int countOdd = 0;
	int countEven = 0;
	while (n > 0) {
		int digit = n % 10;
		if (digit % 2 == 0) {
			countEven++;
		} else {
			countOdd++;
		}
		n /= 10;
	}
	
	return (countEven > countOdd);
}

//lam lai lan 1
int main(){
	
	int testCase;
	scanf("%d", &testCase);
	
	while (testCase--) {
		long long inputNumber;
		scanf("%lld", &inputNumber);
		if (check(inputNumber)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	return 0;
}