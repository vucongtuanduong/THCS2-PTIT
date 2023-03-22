#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 10000



int main() {
	
	int n;
	scanf("%d", &n);
	int a[n];
	double res = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		res += a[i];
	}
	
	res = (double)res / n;
	printf("%.3f", res);
	return 0;
}
