#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


int min(int a, int b) {
	return a > b ? b : a;
}


int main() {
	int rows, columns;
	scanf("%d %d", &rows, &columns);
	
	for (int i = 1; i <= rows; i++) {
		int init = i; 
		for (int j = 1; j <= columns; j++) {
			if (j <= columns - i) {
				printf("%d", init++);
			} else {
				printf("%d", init--);
			}
		}
		printf("\n");
	}
    
	return 0;
}
