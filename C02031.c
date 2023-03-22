
#include <stdio.h>
#include <math.h>
#include <stdbool.h>




/*
5

45678; i = 5; bat dau tu 4; tang 4 lan
3456; i = 4; bat dau tu 3; tang 3 lan
234 ;i = 3; bat dau tu 2; tang 2 lan
12; i  =2 ; bat dau tu 1; tang 1 lan
0; i =1; bat dau tu 0; tang 0 lan

*/
int main() {
	
	int n;
	scanf("%d", &n);
	
	for (int i = n; i >= 1; i--) {
		int init = i - 1;
		for (int j = 1; j <= i; j++) {
			printf("%c", 64 + init++);

		}
		printf("\n");
	}
	
	return 0;
}