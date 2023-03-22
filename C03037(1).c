#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void print(long long n) {
	int freq[10] = {0};
	while (n > 0) {
		int digit = n % 10;
		freq[digit] ++;
		n /= 10;
	}
	if (freq[2] > 0) {
		printf("2 %d\n", freq[2]);
	}
	if (freq[3] > 0) {
		printf("3 %d\n", freq[3]);
	}
	if (freq[5] > 0) {
		printf("5 %d\n", freq[5]);
	}
	if (freq[7] > 0) {
		printf("7 %d\n", freq[7]);
	}
}



//lam lai lan 1
int main(){
	
	long long n;
	scanf("%lld", &n);
	print(n);
	
	return 0;
}