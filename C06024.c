#include <stdio.h>
#include <string.h>

void reverse(int a[], int n) {
	int l = 0;
	int r = n - 1;
	while (l < r) {
		int temp = a[l];
		a[l] = a[r];
		a[r] = temp;
		l++;
		r--;
	}
}

void add(char a[], char b[]) {
	//default: a > b
	int n1 = strlen(a);
	int n2 = strlen(b);
	int n = 0;
	int x[n1], y[n1], z[n1 + 1];
	for (int i = 0; i < n1; i++) {
		x[i] = a[i] - '0';
	}
	for (int i = 0; i < n2; i++) {
		y[i] = b[i] - '0';
	}
	
	reverse(x, n1);
	reverse(y, n2);
	for (int i = n2; i < n1; i++) {
		y[i] = 0;
	}
	int nho = 0;
	for (int i = 0; i < n1; i++) {
		int temp = x[i] + y[i] + nho;
		z[n++] = (temp % 10);
		nho = temp / 10;
	}
	if (nho) {
		z[n++] = nho;
	}
	for (int i = n - 1; i >= 0; i--) {
		printf("%d", z[i]);
	}
}
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		char c[1001], d[1001];
		scanf("%s %s", c, d);
		if (strlen(c) >= strlen(d)) {
			add(c, d);
		} else {
			add(d, c);
		}
		printf("\n");
	}
	
}