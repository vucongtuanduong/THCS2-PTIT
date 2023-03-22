#include<stdio.h>
#include<stdbool.h>



bool check(long long n) {
	int x = n;
	while (n > 0) {
		int digit = n % 10;
		if (digit % 2 != 0) {
			return false;
		}
		n /= 10;
	}
	return (x % 2 == 0);
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