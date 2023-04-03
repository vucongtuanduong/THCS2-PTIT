#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 1000

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int fre[MAX_SIZE] = {0};
	int count[n];
	int c = 0;
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		fre[a[i]]++;
		
	}
	for (int i = 0; i < n; i++) {
		if (fre[a[i]] > 1) {
			count[c] = a[i];
			c++;
			fre[a[i]] = 1;
		}
	}
	printf("%d\n", c);
	for (int i = 0; i < c; i++) {
		printf("%d ", count[i]);
	}
	
	
	return 0;
}