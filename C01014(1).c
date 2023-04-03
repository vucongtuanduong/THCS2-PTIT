#include <stdio.h>

// lam lai lan 2
int main () {
	float a, b;
	scanf("%f %f", &a, &b);
	if (a == 0) {
		if (b == 0) {
			printf("Vo so nghiem");
			
		} else {
			printf("Vo nghiem");
		}
	} else {
		float res = (float) - b / a;
		printf("%.2f", res);
	}	
	return 0;
}