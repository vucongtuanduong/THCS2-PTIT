#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


int sumDivisor(int n) {
	int res = 0;

	for (int i = 2; i <= sqrt(n); i++) {

		
		while (n % i == 0) {
			res += i;
			
			n /= i;
		}
	}
	if (n != 1) {
		res += n;
	}
	return res;
}



int main(){
	int test;
	
	long long res = 0;
	scanf("%d", &test);
	int a[test];
	for (int i = 0; i <= test - 1; i++) {
		scanf("%d", &a[i]);
		
	}
	for (int i = 0; i < test; i++) {
		
		res += sumDivisor(a[i]);
	}
	printf("%lld", res);
	return 0;
}