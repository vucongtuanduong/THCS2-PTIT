#include <stdio.h>

// lam lai lan 1
int main () {
	int c_degree;
	scanf("%d", &c_degree);
	
	double f_degree = (c_degree * 9.0 / 5) + 32;
	printf("%.2f", f_degree);
	return 0;
}