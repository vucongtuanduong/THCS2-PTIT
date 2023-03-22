
#include <stdio.h>
#include <math.h>
#include <stdbool.h>




/*
4

1357 ; i = 1; 
357 ; i =2; bat dau tu 3
57 ; i =3; bat dau tu 5
7 ; i =4 ; bat dau tu 7
*/
int main() {
	
	int n;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		int init = 2 * i - 1;
		for (int j = 1; j <= n - i + 1; j++) {
			printf("%c", 64 + init);
			init += 2;
		}
		printf("\n");
	}
	
	return 0;
}