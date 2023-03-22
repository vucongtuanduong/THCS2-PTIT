#include<stdio.h>
#include<math.h>
// lam lai lan 1
int main(){
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				printf("Infinite solution");
			} else {
				printf("NO");
			}
		} else {
			float res = (float)((-1.0 * c) / b);
			printf("%.2f", res);
		}
	} else {
		float delta = (b * b - 4 * a * c);
		if (delta < 0) {
			printf("NO");
		} else if (delta == 0) {
			float res = (float)(-b / (2 * a));
			printf("%.2f", res);	
		} else {
			float x1 = (float)((-b + sqrt(delta)) / (2 * a));
			float x2 = (float)((-b - sqrt(delta)) / (2 * a));
			printf("%.2f %.2f", x1, x2);
		}
		
	} 
	
	return 0;
}