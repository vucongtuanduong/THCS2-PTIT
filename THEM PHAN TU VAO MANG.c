#include <stdio.h>


int main () {
	int n;
	printf("Enter the length of an array!\n");
	scanf("%d", &n);
	int a[n + 1];
	printf("Enter the elements of an array:\n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int index, value;
	printf("Enter the index and value you want to insert: \n");
	scanf("%d %d", &index, &value);
	for (int i = n; i > index; i--) {
		a[i] = a[i - 1];
	}
	a[index] = value;
	printf("The array after inserted: \n");
	for (int i = 0; i <= n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}