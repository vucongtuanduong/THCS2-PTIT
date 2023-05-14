#include <stdio.h>
#include <string.h>
long long product_digits(int a) {
	long long res = 1;
	while (a > 0) {
		int digit = a % 10;
		if (digit == 0) {
			return 0;
		} else {
			res *= digit;
		}
		a /= 10;
	}
	return res;
}
void sort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (product_digits(a[i]) > product_digits(a[j])) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			} else if (product_digits(a[i]) == product_digits(a[j]) && a[i] > a[j]) {	
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;				
				} else if (product_digits(a[i]) == product_digits(a[j]) && a[i] < a[j]) {	
					//do nothing				
				}
}
}
}
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		sort(a, n);
		for (int i = 0; i < n; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
	}
}