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
	int a, b;
	scanf("%d %d", &a, &b);
	if (divisible (a, b)) {
		printf("Yes");
	} else {
		printf("No");
	}
	
	return 0;	
}