#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int sumDigit(int n) {
	int res = 0;
	while (n > 0) {
		res += (n % 10);
		n /= 10;
	}
	return res;
}


int sumFactor(int n) {
	int sum = 0;
	for(int i = 2; i <= sqrt(n); i++) {
		while (n % i == 0) {
			sum += sumDigit(i);
			n /= i;
		}
	}
	if (n != 1) {
		sum += sumDigit(n);
	}
	return sum;
}

bool smithNumber(int n) {
	int res1 = sumDigit(n);
	int res2 = sumFactor(n);
	if (res1 == res2) {
		return true;
	} else {
		return false;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	if (smithNumber(n)) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	
	return 0;
}