#include <stdio.h>
#include <math.h>

// lam lai lan 2
int main () {
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				printf("Infinite solution");
			} else {
				printf("NO");
			}
			
		} else {
			float res = 1.0 * (-c / b);
			printf("%.2f", res);
		}
	} else {
		float delta = (b * b - 4 * a * c);
		if (delta < 0) {
			printf("NO");
		} else if (delta == 0) {
			float res = (float)((-b) / (2 * a));
			printf("%.2f", res);
		} else {
			float x1 = 1.0 * ((-b - sqrt(delta)) / (2 * a));
			float x2 = 1.0 * ((-b + sqrt(delta)) / (2 * a));
			printf("%.2f %.2f", x2, x1);
		}
	}	
	return 0;
} 