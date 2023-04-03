#include<stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int n) {
	if (n < 2) {
		return false;
	} else {
		for(int i = 2 ; i <= sqrt(n); i++) {
			if (n % i == 0) {
				return false;
			}
		}
	}
	return true;
}

void print(int n) {
	for(int i = 2; i <= n / 2; i++) {
		if (isPrime(i) && isPrime(n - i)) {
			printf("%d %d ", i, n - i);
		}
	}
}

int main(){
	int test;
	scanf("%d", &test);
	
	while (test--) {
		int n;
		scanf("%d", &n);
		print(n);
		printf("\n");
	}
	
	return 0;
}