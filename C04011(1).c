#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool divisible(int n, int k) {
	int m;
	int count = 0;
	for (int i = 2; i <= n; i++) {
		m = i;
		while (m % 2 == 0) {
			count++;
			m /= 2;
			if (count == k) {
				return true;
			}
		}
		if (count == k) {
			return true;
		}
		
	}
	if (count == k) {
		return true;
	} else {
		return false;
	}
}

// lam lai lan 1
int main(){
	int test;
	scanf("%d", &test);
	
	while (test--) {
		int n;
		scanf("%d", &n);
		int a[n];
		int count = 0;
		int max = 0;
		
		for (int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			if (a[i] > max) {
				count++;
				max = a[i];
			}
		}
		
		
		
		
		printf("%d\n", count);
	}
	
	return 0;	
}