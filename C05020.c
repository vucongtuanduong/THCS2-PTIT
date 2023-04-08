#include <stdio.h>
#define MAX_FIBO_SIZE 82

long long fibo[MAX_FIBO_SIZE];
void initialise_fibo() {
	fibo[0] = 0;
	fibo[1] = 1;
	for (int i = 2; i < MAX_FIBO_SIZE; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	
}

int main () {
	initialise_fibo();
	long long b[MAX_FIBO_SIZE];
	for (int i = 0; i < MAX_FIBO_SIZE; i++) {
		b[i] = fibo[i];
	}
	int n;
	scanf("%d", &n);
	int rb = 0, re = n - 1, cb = 0, ce = n - 1, current = 0;
	long long a[n][n];
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
			printf("%lld ", a[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}