#include <stdio.h>
#include <string.h>

void reverse(int a[], int length) {
	int left = 0;
	int right = length - 1;
	while (left < right) {
		int temp = a[left];
		a[left] = a[right];
		a[right] = temp;
		left ++;
		right --;
	}
}
void add(char a[], char b[]) {
	// assume that a > b
	int n1 = strlen(a);
	int n2 = strlen(b);
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
	int current = 0;
	int nho = 0;
	for (int i = 0; i < n1; i++) {
		int temp = x[i] + y[i] + nho;
		z[current] = (temp % 10);
		current++;
		nho = temp / 10;
	}
	if (nho == 1) {
		z[current] = nho;
		current++;
	}
	for (int i = current - 1; i >= 0; i--) {
		printf("%d", z[i]);
	}
}
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		char a[1001], b[1001];
		scanf("%s %s", a, b);
		if (strlen(a) >= strlen(b)) {
			add(a, b);
		} else{
			add(b, a);
		}
		printf("\n");
	}
	
}