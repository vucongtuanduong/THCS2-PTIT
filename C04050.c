#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int a[MAX_LENGTH], int n) {
	int min_index;
	for (int i = 0; i < n - 1; i++) {
		min_index = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[min_index]) {
				min_index = j;
			}
		}
		if (min_index != i) {
			swap(&a[min_index], &a[i]);
		}
	}
}
void giao(int a[MAX_LENGTH], int length_a, int b[MAX_LENGTH], int length_b) {
	for (int i = 0; i < length_a; i++) {
		int kt = 0;
		for (int j = 0; j < length_b; j++) {
			if (a[i] == b[j]) {
				kt = 1;
			}
 		}
 		if (kt == 1) {
 			printf("%d ", a[i]);
		 }
	}
}

void hieu(int a[MAX_LENGTH], int length_a, int b[MAX_LENGTH], int length_b) {
	for (int i = 0; i < length_a; i++) {
		int kt = 1;
		for (int j = 0; j < length_b; j++) {
			if (a[i] == b[j]) {
				kt = 0;
			}
		}
		if (kt == 1) {
			printf("%d ", a[i]);
		}
	}
}


int main () {
	int length_a, length_b;
	scanf("%d %d", &length_a, &length_b);
	int a[MAX_LENGTH], b[MAX_LENGTH];
	for (int i = 0; i < length_a; i++) {
		scanf("%d", &a[i]);
		for (int j = 0; j < i; j++) {
			if (a[j] == a[i]) {
				i -= 1;
				length_a -= 1;
			}
		}	
	}
	for (int i = 0; i < length_b; i++) {
		scanf("%d", &b[i]);
		for (int j = 0; j < i; j++) {
			if (b[j] == b[i]) {
				i -= 1;
				length_b -= 1;
			}
		}
	}
	sort(a, length_a);
	sort(b, length_b);
	giao(a, length_a, b, length_b);
	printf("\n");
	hieu(a, length_a, b, length_b);
	printf("\n");
	hieu(b, length_b, a, length_a);
	
	
	return 0;
}