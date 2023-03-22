#include<stdio.h>

//lam lai lan 1

int gcd1(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd1(b, a % b);
}

int gcd2(int a, int b) {
	if (a == 0 || b == 0) {
		return a + b;
	}
	while (a != b) {
		if (a >= b) {
			a = a - b;
		} else {
			b = b - a;
		}
	}
	return a;
}

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(){
	
	int testCase;
	scanf("%d", &testCase);
	
	while(testCase --) {
		int a, b;
		scanf("%d %d", &a, &b);
		int res = gcd(a, b);
		printf("%d\n", res);
	}
	
	return 0;
}