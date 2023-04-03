#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_SIZE 100

int compare_int(const void *a, const void *b) {
  return (*(int *)a - *(int *)b);
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
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			printf("%d ", a[i]);
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			printf("%d ", a[i]);
		}
	}
	
	return 0;
}