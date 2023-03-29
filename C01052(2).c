#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int count(int n) {
	int count = 0;
	int temp;
	
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			temp = n /i;
			if (i % 2 == 0) {
				count++;
				
			}
			if (temp % 2 == 0) {
				count++;
			}
			
		}
	}
	int sqrtN = sqrt(n);
	if (sqrtN * sqrtN == n && sqrtN % 2 == 0) {
		count--;
	}
	return count;
}

// lam lai lan 3
int main(){
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		scanf("%d", &n);
		printf("%d\n", count(n));
	}
	return 0;
}
  