#include <stdio.h>
#include <math.h>

// lam lai lan 2
int main () {
	
	int lengthA, lengthB;
	scanf("%d %d", &lengthA, &lengthB);
	int a[lengthA], b[lengthB];
	for (int i = 0; i < lengthA; i++) {
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i < lengthB; i++) {
		scanf("%d", &b[i]);
	}
	
	int index;
	scanf("%d", &index);
	
	for (int i = 0; i < index; i++) {
		printf("%d ", a[i]);
	}
	for (int i = 0; i < lengthB; i++) {
		printf("%d ", b[i]);
	}
	for (int i = index; i < lengthA; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}