#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_SIZE 100

void swap(int *a, int *b) {
	int temp = *a;//dereference
	*a = *b;
	*b = temp;
}

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	int count = 1;
	int j;
	
	printf("Buoc 0: %d\n", a[0]);
	
	for (int i = 1; i < n; i++) {
		int temp = a[i];
		j = i - 1;
		
		while (j >= 0 && a[j] >= temp) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
		printf("Buoc %d: ", count);
		for (int i = 0; i < count + 1; i++) {
			printf("%d ", a[i]);
			
		}
		count++;
		printf("\n");
	}	
	return 0;
}