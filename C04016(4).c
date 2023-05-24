#include <stdio.h>
#define MAX 10001
int prime[MAX] = {0};
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int min_index = i;
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
void sieve() {
	prime[0] = prime[1] = 1;
	for (int i = 2; i <= sqrt(MAX); i++) {
		if (prime[i] == 0) {
			for (int j = i * i; j <= MAX; j += i) {
				prime[j] = 1;
			}
		}
	}
}
int main () {
	int test;
	scanf("%d", &test);
	sieve();
	for (int z = 1; z <= test; z++) {
		printf("Test %d:\n", z);
		int n;
		scanf("%d", &n);
		int a[n];
		int fre[10001] = {0};
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		sort(a, n);
		for (int i = 0; i < n; i++) {
			if (prime[a[i]] == 0) {
				fre[a[i]] ++;
			}
			
		}
		for (int i = 0; i < n; i++) {
			if (fre[a[i]] > 0) {
				printf("%d xuat hien %d lan\n", a[i], fre[a[i]]);
				fre[a[i]] = -1;
			}
		}
	}
}