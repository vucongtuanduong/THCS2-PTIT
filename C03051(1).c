#include<stdio.h>
#include<math.h>
#include<stdbool.h>

#define ll long long

bool isPrime(long long n) {
	if (n < 2) {
		return false;
	} else {
		for(int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				return false;
			}
		}
	}
	return true;
}


//lam lai lan 1
int main(){
	int testCase;
	scanf("%d", &testCase);
	while (testCase--) {
		long long l, r;
		int count = 0;
		scanf("%lld %lld", &l, &r);
		
		int sqrtR = sqrt(r);
		
		for(long long i = l; i <= sqrtR; i++) {
			if (isPrime(i)) {
				count++;
			}
		}
		printf("%d\n", count);
	}
	
	return 0;
}