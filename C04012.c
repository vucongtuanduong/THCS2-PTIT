#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 100



//lam lai lan 1
int main(){
	
	int n;
	scanf("%d", &n);
	
	int a[n];
	int fre[MAX_SIZE] = {};
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		
		fre[a[i]]++;
		
	}
	bool ok = false;
	int count = 0;
	for(int i = 0; i < n; i++) {
		if (fre[a[i]] == 1) {
			count++;
		}
	}
	printf("%d\n", count);
	for(int i = 0; i < n; i++) {
		if (fre[a[i]] ==  1) {
			printf("%d ", a[i]);
			fre[a[i]] = 1;
			ok = true;
		}
	}
	
	
	return 0;
}