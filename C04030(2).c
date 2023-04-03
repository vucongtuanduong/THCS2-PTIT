#include <stdio.h>
#include <math.h>



void input_array(int a[], int length) {
	for (int i = 0; i < length; i++) {
		scanf("%d", &a[i]);
	}
}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort_ascending(int a[], int length)  {
	int min_index;
	for (int i = 0; i < length - 1; i++) {
		min_index = i;
		for (int j = i + 1; j < length; j++) {
			if (a[j] < a[min_index]) {
				min_index = j;
			}
		}
		if (min_index != i) {
			swap(&a[i], &a[min_index]);
		}
	}
}

void sort_descending(int a[], int length)  {
	int max_index;
	for (int i = 0; i < length - 1; i++) {
		max_index = i;
		for (int j = i + 1; j < length; j++) {
			if (a[j] > a[max_index]) {
				max_index = j;
			}
		}
		if (max_index != i) {
			swap(&a[i], &a[max_index]);
		}
	}
}

void print_array(int a[], int b[], int length) {
	for (int i = 0; i < length; i++) {
		printf("%d ", a[i]);
		printf("%d ", b[i]);
	}
}

//lam lai lan 2
int main() {
	int test;
	scanf("%d", &test);
	for (int i = 1; i <= test; i++) {
		printf("Test %d:\n", i);
		int n;
		scanf("%d", &n);
		int a[n], b[n];
		input_array(a, n);
		input_array(b, n);
		sort_ascending(a, n);
		sort_descending(b, n);
		print_array(a, b, n);
		printf("\n");
	}
	
	return 0;
}