#include <stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int index;
	scanf("%d", &index);
	for (int i = index; i < n; i++) {
		printf("%d ", a[i]);
	}
	for (int i = 0; i < index; i++) {
		printf("%d ", a[i]);
	}
}