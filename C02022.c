#include <stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		
		if (i % 2 == 0) {
			for (int j = 1; j <= i; j++) {
				sum++;
			}
			int res = sum;
			for (int j = 1; j <= i; j++) {
				printf("%d ", res--);
			}
		} else {
			
			
			for (int j = 1; j <= i; j++) {
				sum ++;
				printf("%d ", sum);
				
			}
		}
	
		printf("\n");
	}

	return 0;
}