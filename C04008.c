#include <stdio.h>
#include <math.h>
#include <stdbool.h>





//lam lai lan 1
int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++) {
		printf("Test %d:\n", i);
		int lengthA, lengthB;
	scanf("%d %d", &lengthA, &lengthB);
	int index;
	scanf("%d", &index);
	int a[lengthA], b[lengthB];
	
	for (int i = 0; i < lengthA; i++){
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < lengthB; i++) {
		scanf("%d", &b[i]);
	}
	
	
	
	for(int i = 0; i < index; i++) {
		printf("%d ", a[i]);
	}
	
	for(int i = 0; i < lengthB; i++) {
		printf("%d ", b[i]);
	}
	
	for(int i = index; i < lengthA; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	}
	
	
	
	return 0;
}