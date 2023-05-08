#include <stdio.h>

int main () {
	FILE *fo = fopen("test.txt", "r");
	float a, b, c, d;
	fscanf(fo , "%f %f  %f        %f", &a, &b, &c, &d);
	printf("%f %f %f %f", a, b, c, d);
}