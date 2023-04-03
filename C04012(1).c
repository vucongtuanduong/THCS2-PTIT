#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 100

// lam lai lan 1
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int fre[MAX_SIZE]={0};
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		fre[a[i]]++;
	}
	

	
	for (int i = 0; i < n; i++) {
		if (fre[a[i]] > 1) {
			fre[a[i]] = 0;
			printf("%d ", a[i]);
		}
	}
	return 0;
}