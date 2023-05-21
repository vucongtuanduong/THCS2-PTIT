#include <stdio.h>
#include <math.h>
int prime[10001] = {0};
void sieve() {
	prime[0] = prime[1] =  1;
	for (int i = 0; i <= sqrt(10001); i++) {
		if (prime[i] == 0) {
			for (int j = i * i; j < 10001; j += i) {
				prime[j] = 1;
			}
		}
	}
}
void sort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main () {
	int test;
	scanf("%d", &test);
	sieve();
	for (int z = 1; z <= test; z++) {
		printf("Test %d:\n", z);
		int n;
		scanf("%d", &n);
		int a[n];
		int fre[10001] = {0};
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		sort(a, n);
		for (int i = 0 ; i < n; i++) {
		 	if (prime[a[i]] == 0) {
				fre[a[i]]++;
				
			}
		}
		for (int i = 0; i < n; i++) {
			if (fre[a[i]] > 0) {
				printf("%d xuat hien %d lan\n", a[i], fre[a[i]]);
				fre[a[i]] = -1;
			}
			
		}
		
	}
	
}