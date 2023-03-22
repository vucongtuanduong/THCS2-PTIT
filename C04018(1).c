#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 100005



// lam lai lan 1
int main(){
	int test;
	scanf("%d", &test);
	
	while (test--) {
		int n;
		scanf("%d", &n);
		int a[n];
		int count = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < n - 1; i++) {
			if (a[i] == a[i + 1]) {
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}