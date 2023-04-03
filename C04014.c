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
	int count[MAX_SIZE] = {};
	int c = 0;//count
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		
		fre[a[i]]++;
		if (fre[a[i]] == 1) {
			count[c] = a[i];
			c++;
		}
		
	}
	
	
	for(int i = 0; i < c; i++) {
		printf("%d %d\n", count[i], fre[count[i]]);
		
	}
	
	
	return 0;
}