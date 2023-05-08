#include <stdio.h>
#define MAX 100
/*
find the different elements in two array, store in another array
for example: p and q -> find p - q
*/
int is_exist(int c[], int count, int value) {
	if (count == 0) {
		return 0;
	} else {
		for (int i = 0; i < count; i++) {
			if (c[i] == value) {
				return 1;
			} 
		}
	}
	return 0;
}

int main (){
	
	int a[MAX], b[MAX], c[MAX];
	int length_a, length_b;
	printf("Enter the length of the first array: \n");
	scanf("%d", &length_a);
	printf("Enter the elements of the first array: \n");
	for (int i = 0; i < length_a; i++) {
		scanf("%d", &a[i]);
	}
	printf("Enter the length of the second array: \n");
	scanf("%d", &length_b);
	printf("Enter the elements of the second array: \n");
	for (int i = 0; i < length_b; i++) {
		scanf("%d", &b[i]);
	}
	int count = 0;
	for (int i = 0; i < length_a; i++) {
		for (int j = 0; j < length_b; j++) {
			if (a[i] == b[j]) {
				break;	
			} if (j == length_b - 1) { //must be iterate until the end of the array to check
				if (is_exist(c, count, a[i]) == 0) {
					c[count] = a[i];
					count++;
				}
			}
		}
	}
	if (count > 0) {
		printf("\nThe different elements of two arrays: \n");
		for (int i = 0; i < count; i++) {
			printf("%d ", c[i]);
		}
	} else {
		printf("\nTwo arrays have no different elements");
	}
}