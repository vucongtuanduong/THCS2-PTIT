#include <stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		
		int res = i;
		
		int init;	
		for (int j = 1; j <= i; j++) {
			printf("%d ", res);
			res += n - j;
		}
	
		printf("\n");
	}

	return 0;
}