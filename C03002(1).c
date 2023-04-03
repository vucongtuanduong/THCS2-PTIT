#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isPrime(int n) {
	if (n < 2) {
		return false;
		
	} else {
		for(int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				return false;
			}
		}
	}
	return true;
}

//bool prime[1000000];

void sieve(int n) {
	bool prime[n + 1];
	
	for (int i = 0; i < n + 1; i++) {
		prime[i] = true;
	}
	
	prime[0] = prime[1] = false;
	
	for(int i = 2; i <= sqrt(n); i++) {
		if (prime[i] == true) {
			for (int j = i * i; j <= n; j += i) {
				prime[j] = false;
			}
		}
	}
	
	for(int i = 2; i <= n; i++) {
		if (prime[i] == true) {
			printf("%d\n", i);
		}
	}
	
}


//lam lai lan 1
//this time, using sieve of eratosthenes
int main(){
	
	int n;
	scanf("%d", &n);
	sieve(n);
	
	return 0;
}