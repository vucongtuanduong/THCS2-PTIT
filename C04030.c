#include <stdio.h>

#include <math.h>

#include <stdbool.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sortAscending(int a[], int length) {
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++){
			if (a[j] < a[i]) {
				swap(&a[i], &a[j]);
			}
		}
	}
}

void sortDescending(int a[], int length) {
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++){
			if (a[j] > a[i]) {
				swap(&a[i], &a[j]);
			}
		}
	}
}

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int z = 1; z <= test; z++) {
		printf("Test %d:\n", z);
		int n;
		scanf("%d", &n);
		int a[n];
		int b[n];
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