#include <stdio.h>
#include <math.h>
#include <stdbool.h>


void leadNumber(int a[], int length) {
	int res[length];
	int m = -1;
	int count = 0;
	for (int i = length - 1; i >= 0; i--) {
		if (a[i] > m) {
			m = a[i];
			res[count++] = a[i];
		}
	}
	
	for (int i = count - 1; i >= 0; i--) {
		printf("%d ", res[i]);
	}
}


void leadNumber2(int a[], int length) {//cach 2
	//chat gpt
}

int main() {
	
	int test;
	scanf("%d", &test);
	
	while (test--) {
		int n;
		scanf("%d", &n);
		
		int a[n];
		
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		
		leadNumber(a, n);
		
		printf("\n");
	}
	return 0;
}
