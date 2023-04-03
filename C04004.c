#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long
void isFibonacci(int n) {
	ll arr[n + 1];
	arr[0] = 0;
	arr[1] = 1;
	for(int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	printf("%lld\n", arr[n]);
}

int main() {
  
	int t;// testcase
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		isFibonacci(n);
	}
	return(0);
}