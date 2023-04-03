#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int n) {
	if (n < 2){
		return false;
	} else {
		for (int i = 2; i <= sqrt(n); i++){
			if (n % i == 0) {
				return false;
			}
		}
	}
	return true;
}

void freArray(long long n) {
	int freq[10];
	for(int i = 0; i < 10; i++) {
		freq[i] = 0;
	}
	while (n > 0) {
		int digit = n % 10;
		if (isPrime(digit)) {
			freq[digit]++;
		}
		n /= 10;
	}
	if (freq[2] > 0) {
		printf("2 %d\n", freq[2]);
	}
	if (freq[3] > 0) {
		printf("3 %d\n", freq[3]);
	}
	if (freq[5] > 0) {
		printf("5 %d\n", freq[5]);
	}
	if (freq[7] > 0) {
		printf("7 %d\n", freq[7]);
	}
}

int main(){
	
	long long n;
	scanf("%lld" , &n);
	freArray(n);
	return 0;
}