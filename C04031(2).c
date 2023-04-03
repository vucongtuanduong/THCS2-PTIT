#include <stdio.h>
#include <math.h>
#define MAX_ARR_VALUE 1005
void input_array(int a[], int length);
void implement(int a[], int length);
//lam lai lan 2
int main() {
	int test;
	scanf("%d", &test);
	for (int i = 1; i <= test; i++) {
		printf("Test %d:\n", i);
		int n;
		scanf("%d", &n);
		int a[n];
		input_array(a, n);
		implement(a, n);
	}
	
	return 0;
}
void input_array(int a[], int length) {
	for (int i = 0; i < length; i++) {
		scanf("%d", &a[i]);
	}
}
void implement(int a[], int length) {
	int max = -1;
	int count = 0;
	int fre[MAX_ARR_VALUE] = {0};
	for (int i = 0; i < length; i++) {
		if (a[i] > max) {
			count++;
			max = a[i];
			fre[a[i]]++;
		} else {
			count = 0;
		}
	}
	printf("%d\n", count);
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length ; j++) {
			if (fre[a[j]] > 0) {
			printf("%d ", a[j]);
			}
		}
		printf("\n");
		
		
	}
}