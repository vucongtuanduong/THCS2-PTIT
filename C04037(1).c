#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 10000

// lam lai lan 1
int main(){
	
	int n;
	scanf("%d", &n);
	int a[n];
	int fre[MAX_SIZE];
	int res[MAX_SIZE];
	int count = 0;
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		fre[a[i]]++;
		
	}
	
	for (int i = 0; i < n; i++) {
		if (fre[a[i]] > 1) {
			res[count++] = a[i];
			fre[a[i]] = 1;
		} 
	}
	
	printf("%d\n", count);
	for (int i = 0; i < count; i++) {
		printf("%d ", res[i]);
	}
	
	return 0;
}