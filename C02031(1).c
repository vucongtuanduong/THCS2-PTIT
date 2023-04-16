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
	for (int i = n; i >= 1; i--) {
		int init = i;
		for (int j = 1; j <= i; j++) {
			printf("%c", init + '@' - 1);
			init++;
		}
		printf("\n");
	}
	return 0;
}
