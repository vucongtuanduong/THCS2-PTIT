#include <stdio.h>
#include <math.h>

#define MAX_INPUT_VALUE 1000005

int fre[MAX_INPUT_VALUE] = {0};
int print(int n) {
	
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		fre[a]++;
		fre[b]++;
	}
	
	for (int i = 0; i < MAX_INPUT_VALUE; i++) {
		if (fre[i] == n - 1) {
			printf("Yes\n");
			return 1;
		}
		
	}
	printf("No\n");
	return 0;
}

// lam lai lan 2
int main() {
	int n;
	scanf("%d", &n);
	int exit = print(n);
	
	return 0;
}