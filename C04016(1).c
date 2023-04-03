#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 100005

bool prime[MAX_SIZE] = {false};
void sieve() {
//	for (int i = 2; i < MAX_SIZE; i++) {
//		prime[i] = true;
//	}
	prime[0] = prime[1] = true;
	for (int i = 2; i <= sqrt(MAX_SIZE); i++) {
		if (!prime[i]) {
			for (int j = i * i; j < MAX_SIZE; j += i) {
				prime[j] = true;
			}
		}
	}
}

// lam lai lan 1
int main(){
	int test;
	scanf("%d", &test);
	sieve();
	for (int i = 1; i <= test; i++) {
		printf("Test %d:\n", i);
		int n;
		scanf("%d", &n);
		int a[n + 1];
		int fre[MAX_SIZE]={0};

		for (int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
			if (!prime[a[i]]) {
				fre[a[i]]++;
			}
			
		}
		
		

	
		
		for (int i = 1; i < MAX_SIZE; i++) {
	
			if (fre[i] != 0) {
				printf("%d xuat hien %d lan\n", i, fre[i]);
			}
		}}
	
	
	return 0;
}