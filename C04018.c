#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_SIZE 30





int main(){
	
	int test;
	scanf("%d", &test);

	while (test--) {
		int n;
		scanf("%d", &n);
		int a[n + 1];
		a[0] = 0;
		int count = 0;
		for(int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
			if (a[i] == a[i - 1]) {
				count++;
			}
		}
		printf("%d\n", count);
	}
		
	
	
	return 0;
}
	

	
	
	
