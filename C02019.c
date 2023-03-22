#include <stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		
		int res = 2;
		int init;	
		for (int j = 1; j <= 2 * i - 1; j++) {
			
			if (j <= i) {

				printf("%d", res);
				res += 2;
				init = res - 2;
			} else {
				init -= 2;
				printf("%d", init);
				
		}
	}
		printf("\n");
	}

	return 0;
}