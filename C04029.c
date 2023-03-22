#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_SIZE 100

void swap(int *a, int *b) {
	int temp = *a;//dereference
	*a = *b;
	*b = temp;
}

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[i]) {
				swap(&a[i], &a[j]);
			}
		}
		printf("Buoc %d: ", i + 1);
		for (int i = 0; i < n; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}