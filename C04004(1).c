#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void isFibo(int n) {
	long long arr[n + 1];
	arr[0] = 0;
	arr[1] = 1;
	for(int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	
	printf("%lld\n", arr[n]);
}



//lam lai lan 1
int main(){
	
	int test;
	scanf("%d", &test);
	
	while (test--) {
		int n;
		scanf("%d", &n);
		isFibo(n);
	}
	
	return 0;
}