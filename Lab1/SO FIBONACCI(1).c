#include <stdio.h>
#include <math.h>

int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		scanf("%d", &n);
		long long f1 = 1;
		long long f2 = 1;
		long long temp = 0;
		if (n == 1 || n == 2) {
			printf("%d\n", f1);
		} else {
			while (n > 2) {
			temp = f1 + f2;
			f1 = f2;
			f2 = temp;
			n--;
			}
			printf("%lld\n", temp);
		}
		
	}
	
	
	return 0;
} 