#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


int min(int a, int b) {
	return a > b ? b : a;
}
int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int rows, columns;
	scanf("%d %d", &rows, &columns);
	
	for (int i = rows; i >= 1; i--) {
		int init = max(rows, columns);
		printf("%d", init--);
		for (int j = 1; j <= columns; j++) {
			if (j < i) {
				printf("%d", init--);
			} else {
				printf("%d", init++);
			}
		}
		
		printf("\n");
	}
    
	return 0;
}
