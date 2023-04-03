#include <stdio.h>
#include <math.h>

#define NUMS_FIBO 30


int fibo[NUMS_FIBO];

void create_fibo() {
	fibo[0] = 0;
	fibo[1]= 1;
	for (int i = 2; i < NUMS_FIBO; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
}

int is_fibo(int n) {
	for (int i = 0; i < NUMS_FIBO; i++) {
		if (fibo[i] == n) {
			return 1;
		}
	}
	return 0;
}


// lam lai lan 2
int main() {
	int n;
	scanf("%d", &n);
	create_fibo();
	printf("%d", is_fibo(n));
	return 0;
}