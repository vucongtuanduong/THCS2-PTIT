#include<stdio.h>
#include<stdbool.h>

bool check(long long n) {
	while (n > 0) {
		int digit = n % 10;
		n /= 10;
		if ((n % 10) > digit){
			return false;
		}
	}
	return true;
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