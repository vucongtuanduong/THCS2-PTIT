#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

long long reverse(long long n) {
	long long reversed = 0;

	while (n > 0) {
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}
	return reversed;
}

int cut(int digit) {
	if (digit == 0 || digit == 8 || digit == 9){
		return 0;
	} else if (digit == 1) {
		return 1;
	} else {
		return -1;//invalid
	}
}

long long implement(long long n) {
	int count0 = 0;
	while (n % 10 == 0) {
		count0++;
		n /= 10;
	}
	n = reverse(n);
	
	long long res = 0;
	while (n > 0) {
		if (cut(n % 10) == -1) {
			return -1;
		} else {
			res = res * 10 + cut(n % 10);
			n /= 10;
		}
	}
	
	while (count0 > 0) {
		res = res * 10;
		count0--;
	}
	return res;
}

int main() {
	
	
	int test;
	scanf("%d\n", &test);
	long long n;
	while (test--) {
		
		scanf("%lld", &n);
		if (implement(n) <= 0 ) {
			printf("INVALID\n");
		} else {
			printf("%lld\n", implement(n));
		}
		
	}
	
	
	
	
	return 0;
}