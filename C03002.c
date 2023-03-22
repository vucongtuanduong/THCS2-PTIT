#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isPrime(int n) {
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


int main(){
	
	int n;
	scanf("%d", &n);
	
	for(int i = 2; i < n; i++) {
		if (isPrime(i)) {
			printf("%d\n", i);	
		}
	}
	
	return 0;
}