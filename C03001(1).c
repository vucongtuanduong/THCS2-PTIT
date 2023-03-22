#include<stdio.h>
#include<stdbool.h>

int sumNumber(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

bool check(int n) {
	int sum = sumNumber(n);
	if (sum % 10 == 0) {
		return true;
	} else {
		return false;
	}
}

//lam lai lan 1
int main(){
	
	int testCase;
	scanf("%d", &testCase);
	
	while (testCase--) {
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