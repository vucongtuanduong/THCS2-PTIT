#include<stdio.h>
#include<math.h>
#include<stdbool.h>

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


int main(){
	
	int count;
	scanf("%d", &count);
	
	long long i = 2;
	
	while (count > 0) {
		
		if (isPrime(i)) {
			printf("%lld\n", i);
			count--;
		}
		
		i++;
	}
	
	return 0;
}