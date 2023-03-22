#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 1000005

int prime[MAX_SIZE] = {1};

void sieve(){
	
	prime[0] = prime[1] = 0;
	for (int i = 0; i < MAX_SIZE; i++) {
		prime[i] = 1;
	}
	for (int i = 2; i <= sqrt(100000); i++){
		if (prime[i] == 1) {
			for (int j = i * i; j <= 100000; j += i) {
				prime[j] = 0;
			} 
		}
	}
}

bool sumDigit(int n) {
	int res = 0;
	while (n > 0) {
		res += (n % 10);
		n /= 10;
	}
	if (res % 5 == 0) {
		return true;
	} else {
		return false;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	sieve();
	int count = 0;
	
	for (int i = 2; i <= n; i++) {
		if (prime[i] == 1 && sumDigit(i)) {
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d", count);
	
	
	return 0;
}