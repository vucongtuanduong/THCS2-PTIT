#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_SIZE 30000

void sortAscending(int a[], int length);
void sortDescending(int b[], int length);
void swap(int *a, int *b);

//lam lai lan 1
int main() {
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++) {
		printf("Test %d:\n", i);
		int n;
		scanf("%d", &n);// length of both array A and B
		int a[n], b[n];
		
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		
		for (int i = 0; i < n; i++) {
			scanf("%d", &b[i]);
		}
		
		sortAscending(a, n);
		sortDescending(b, n);
		
		
		for (int i = 0; i < n; i++) {
			printf("%d ", a[i]);
			printf("%d ", b[i]);
		}
		printf("\n");
	}
	
	return 0;
}

void sortAscending(int b[], int length) {
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			if (b[j] <= b[i]) {
				swap(&b[i], &b[j]);
			}
		}
	}
}

void sortDescending(int a[], int length) {
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			if (a[j] >= a[i]) {
				swap(&a[i], &a[j]);
			}
		}
	}
}






void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}