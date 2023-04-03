#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 10000

// lam lai lan 1
int main(){
	
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)  {
		int count = 1;
		for (int j = 0; j < n; j++) {
			if (j <= i) {
				printf("0 ");
			} else {
				printf("%d ", count++);
			}
		}
		printf("\n");
	}
	
	
	return 0;
}