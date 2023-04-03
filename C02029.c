#include <stdio.h>


/*
input: 4
output:
1
2 5
3 6 8
4 7 9 10



*/
int main () {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		int res = i;
		for (int j = 1; j <= i; j++) {
			printf("%c ", res + 'A' - 1);
			res += n - j;
		}
	
		printf("\n");
	}

	return 0;
}