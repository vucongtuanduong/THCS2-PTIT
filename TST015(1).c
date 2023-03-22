
#include <stdio.h>
#include <math.h>
#define MAX_SIZE 10000

typedef struct Triangle{
	float a, b, c;
	float perimeter;
	float area;
} triangle;

void input(triangle a[], int length);
void calc_area(triangle a[], int length);
void print(triangle a[], int length);


void input(triangle a[], int length) {
	for (int i = 0; i < length; i++) {
		scanf("%f %f %f", &a[i].a, &a[i].b, &a[i].c);
	}
}

void calc_area(triangle a[], int length) {
	for (int i = 0; i < length; i++) {
		a[i].perimeter = (float)(a[i].a + a[i].b + a[i].c) * 0.5;
		a[i].area  = sqrt(a[i].perimeter * (a[i].perimeter - a[i].a) * (a[i].perimeter - a[i].b) * (a[i].perimeter - a[i].c));
		
	}
}

void print(triangle a[], int length) {
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			if (a[j].area < a[i].area) {
				triangle temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for (int i = 0; i < length; i++) {
		printf("%.0f %.0f %.0f\n", a[i].a, a[i].b, a[i].c);
		
	}
}


int main() {
	
	int n;
	scanf("%d", &n);
	
	triangle a[n];
	
	input(a, n);
	calc_area(a, n);
	print(a, n);
	
	return 0;
}