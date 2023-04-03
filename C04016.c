#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_SIZE 100005

int prime[MAX_SIZE] = {0};//false

void sieve() {
	prime[1] = 1;//true
	for(int i = 2 ; i <= sqrt(MAX_SIZE); i++) {
		if (!prime[i]) {
			for(int j = i * i; j <= 100000; j += i) {
				prime[j] = 1;//true
			}
		}
	}
}



int main(){
	
	int test;
	scanf("%d", &test);
	sieve();
	for (int j = 1; j <= test; j++) {
		printf("Test %d:\n", j);
		int n;
		scanf("%d", &n);
		
		int a[n + 1];
		int fre[MAX_SIZE] = {};
		
		
		for(int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
			if (!prime[a[i]]) {
				fre[a[i]]++;
			}
			
		}
			
		for(int i = 1; i < MAX_SIZE; i++) {
			if (fre[i] != 0)
			printf("%d xuat hien %d lan\n", i, fre[i]);
		
		}
	}
		
	
	
	return 0;
}
	

	
	
	
