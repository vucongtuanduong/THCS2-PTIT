#include <stdio.h>
#define MAX_SIZE 1000005

int prime[MAX_SIZE] = {0};
void sieve() {
	prime[0] = prime[1] = 1;
	for (int i = 2; i <= sqrt(MAX_SIZE - 5); i++) {
		if (prime[i] == 0) {
			for (int j = i * i; j <= MAX_SIZE - 5; j += i) {
				prime[j] = 1;
			}
		}
	}
}
int main () {
	int test;
	scanf("%d", &test);
	sieve();
	int b[MAX_SIZE];
	int count = 0;
	for (int i = 2; i < MAX_SIZE; i++) {
		if (prime[i] == 0) {
			b[count++] = i;
		}
	}
	for (int z = 1; z <= test; z++) {
		printf("Test %d:\n", z);
		int n;
		scanf("%d", &n);
		int rb = 0, re = n - 1, cb = 0, ce = n - 1, current = 0, a[n][n];
		while (rb <= n / 2 && cb <= n / 2) {
			for (int i = cb; i <= ce; i++) {
				a[rb][i] = b[current];
				current++;
			}
			for (int j = rb + 1; j <= re; j++) {
				a[j][ce] = b[current];
				current++;
			}
			for (int i = ce - 1; i >= cb; i--) {
				a[re][i] = b[current];
				current++;
			}
			for (int j = re - 1; j >= rb + 1; j--) {
				a[j][cb] = b[current];
				current++;
			}
			rb++;
			re--;
			cb++;
			ce--;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0 ; j < n; j++) {
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	
	return 0;
}