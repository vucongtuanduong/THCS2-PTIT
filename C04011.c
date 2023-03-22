#include <stdio.h>
#include <math.h>

int main(){
	int test;
	scanf("%d", &test);
	
	while (test--) {
		int n;
		scanf("%d", &n);
		int a[n];
		int count = 0;
		int max = 0;
		for(int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			if (a[i] > max) {
				count++;
				max = a[i];
			}	
	}
		
		
		
		printf("%d\n", count);
	}
	
	
	

	

	
	return 0;
}