#include <stdio.h>


/*
input: 5
output:
1
1 3 1
1 3 5 3 1
1 3 5 7 5 3 1
1 3 5 7 9 7 5 3 1




*/
int main () {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		int res = 1;
		int init;
		for (int j = 1; j <= 2 * i - 1; j++) {
			if (j <= i) {
				printf("%c", res + 'A' - 2);
				init = res;
				res += 2;
				
			} else {
				init -= 2;
				printf("%c", init + 'A' - 2);
				
			}
		}
	
		printf("\n");
	}

	return 0;
}