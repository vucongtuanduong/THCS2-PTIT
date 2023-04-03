#include<stdio.h>
#include<math.h>
#include<stdbool.h>


//lam lai lan 1
//chua xong
void sieve(int a, int b){
	int n = b;
	bool prime[n + 1];
	for(int i = 0; i <= n; i++) {
		prime[i] = true;
	}
	prime[0] = prime[1] = false;
	for(int i = 2; i <= sqrt(n); i++){
		if (prime[i]) {
			for(int j = i * i; j <= n; j += i) {
				prime[j] = false;
			}
		}
	}
	int count = 0;
	for(int i = a; i <= b; i++) {
		if (prime[i] == true) {
			count++;
		}
	}
	printf("%d\n", count);
}


int main(){
	int testCase;
	scanf("%d", &testCase);
	while (testCase--) {
		int a, b;
		scanf("%d%d", &a, &b);
		sieve(a, b);
	}
	return 0;
}