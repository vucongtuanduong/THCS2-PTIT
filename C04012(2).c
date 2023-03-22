#include <stdio.h>
#include <math.h>

#define MAX_ARR_VALUE 100

// lam lai lan 2
int main () {
	
	int n;
	scanf("%d", &n);
	int a[n];
	int fre[MAX_ARR_VALUE]={0};
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		fre[a[i]]++;
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (fre[a[i]] > 1) {
			count++;
			printf("%d ", a[i]);
			fre[a[i]] = -1;
		}
	}
	if (count == 0) {
		printf("0");
	}
	return 0;
}