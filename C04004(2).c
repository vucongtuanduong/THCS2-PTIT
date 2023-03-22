#include <stdio.h>
#include <math.h>

#define NUMS_FIBO 92


long long fibo[NUMS_FIBO];

void create_fibo(int n) {
	fibo[0] = 0;
	fibo[1]= 1;
	for (int i = 2; i < n + 1; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	
}




// lam lai lan 2
int main() {
	int test;
	scanf("%d", &test);
	
	int n;
	while (test--) {
		scanf("%d", &n);
		create_fibo(n);
		printf("%lld\n", fibo[n]);
	}
	
	return 0;
}