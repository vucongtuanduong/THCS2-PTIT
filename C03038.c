#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

//cong thuc lagrande

int count(int n, int p) {
	int res = 0;
	for (int i = p; i <= n; i *= p) {
		res += n / i;
	}
	return res;
}

int count2(int n, int p) {
	int count = 0;
	for (int i = p; i <= n; i += p) {
		int temp = i;
		while (temp % p == 0) {
			count++;
			temp /= p;
		}
	}
	return count;
}

int main() {
	
	
	int test;
	scanf("%d\n", &test);
	int n, p;
	while (test--) {
		scanf("%d %d", &n, &p);
		int res = count(n, p);
		printf("%d\n", res);
		
		
	}
	
	
	
	
	return 0;
}