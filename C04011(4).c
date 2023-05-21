#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		scanf("%d", &n);
		int a[n];
		int max = 0;
		int count = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			if (a[i] > max) {
				max = a[i];
				count++;
			}
		} 
		
	
		printf("%d\n",count);
	}
}