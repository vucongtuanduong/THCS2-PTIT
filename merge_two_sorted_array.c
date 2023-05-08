#include <stdio.h>
/*
merge two sorted array into one new array
idea: we have 3 variables as current length of 3 arrays
iterate through length of the first array, each time compare with the current element of the second array,depends on the result we increase two or three(in case two array have the same element) variables by 1
if one of the array reach its length , then the remaining element of the other array will be added to the list
*/
#define MAX 100
int main (){
	printf("Enter the length of the first sorted array: \n");
	int length_a, length_b;
	scanf("%d", &length_a);
	int a[length_a];
	printf("Enter the elements of the first sorted array: \n");
	for (int i = 0; i < length_a; i++) {
		scanf("%d", &a[i]);
	}
	printf("Enter the length of the second sorted array: \n");
	scanf("%d", &length_b);
	int b[length_b];
	printf("Enter the elements of the second sorted array: \n");
	for (int i = 0; i < length_b; i++) {
		scanf("%d", &b[i]);
	}
	int current_a, current_b, current_c;
	int c[MAX];
}