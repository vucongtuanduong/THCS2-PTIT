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
void sub(char a[], char b[]) {
	// assume that a > b
	int n1 = strlen(a);
	int n2 = strlen(b);
	int x[1000], y[1000], z[1000];
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
		int temp = x[i] - y[i] - nho;
		if (temp < 0){
			nho = 1;
			z[current] = temp + 10;
			current++;
		} else {
			z[current] = temp;
			current++;
			nho = 0;
		}
		
	}
	int ok = 0;
	for (int i = current - 1; i >= 0; i--) {
		if ((ok == 0) && (z[i])) {
			ok = 1;
		}
		if (ok) {
			printf("%d", z[i]);
		}
	}
	if (ok == 0) {
		printf("0");
	}
	
}
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		char a[1001], b[1001];
		scanf("%s%s", a, b);
		if ((strlen(a) > strlen(b)) || (strlen(a) == strlen(b) && (strcmp(a, b) > 0))) {
			sub(a, b);
		} else{
			sub(b, a);
		}
		printf("\n");
	}
	
}