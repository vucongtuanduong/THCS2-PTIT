#include <stdio.h>
#include <math.h>
#define MAX_VALUE 100000

int prime[MAX_VALUE] = {0};
void era() {
	prime[0] = prime[1] = 1;
	for (int i = 2; i <= sqrt(MAX_VALUE); i++) {
		if (prime[i] == 0) {
			for (int j = i * i; j < MAX_VALUE; j += i) {
				prime[j] = 1;
			}
		}
	}
}
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sort(int a[], int n) {
	int min_index;
	for (int i = 0; i < n - 1; i++) {
		min_index = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[min_index]) {
				min_index = j;
			}
		}
		if (min_index != i) {
			swap(&a[i], &a[min_index]);
		}
	}
}

int main () {
	int test;
	scanf("%d", &test);
	era();
	for (int z = 1; z <= test; z++) {
		printf("Test %d:\n", z);
		int n;
		scanf("%d", &n);
		int a[n];
		int fre[MAX_VALUE] = {0};
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);	
		}
		sort(a, n);
		for (int i = 0; i < n; i++) {
			if (prime[a[i]] == 0) {
				fre[a[i]]++;
			}
		}
		for (int i = 0; i < n; i++) {
			if (fre[a[i]] > 0) {
				printf("%d xuat hien %d lan\n", a[i], fre[a[i]]);
				fre[a[i]] = -1;
			}
		}
	}
		
	return 0;
}