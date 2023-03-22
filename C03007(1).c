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


bool palindrome(long long n) {
	long long reversed = 0;
	long long x = n;
	while (n > 0) {
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}
	if (reversed == x) {
		return true;
	} else {
		return false;
	}
}

bool check(long long n) {
	if (isPrime(n) && palindrome(n)) {
		return true;
	} else {
		return false;
	}
}

int main(){
	
	int testCase;
	scanf("%d", &testCase);
	
	while(testCase--) {
		long long a, b;
		scanf("%lld %lld", &a, &b);
		
		int count  = 0;
		for(long long i = a; i <= b; i++) {
			if (check(i)) {
				printf("%lld ", i);
				count++;
			}
			if (count == 10) {
				printf("\n");
				count = 0;
			}
		}
		printf("\n\n");
	}
	
	return 0;
}