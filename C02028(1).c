#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


int min(int a, int b) {
	return a > b ? b : a;
}


int main() {
	int n;
	scanf("%d", &n);
	
	int init ;
	int x = n;
	for (int i = 1; i <= (2 * n + 1); i += 2) {
		init = i;
		for (int j = 1; j <= x; j++) {
			printf("%c", init + '@');
			init += 2;
		}
		x--;
		printf("\n");
	}
    
	return 0;
}
