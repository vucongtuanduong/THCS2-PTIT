#include <stdio.h>

int min(int a, int b) {
	return a > b ? b : a;
}

int main () {
	int rows, columns;
	scanf("%d %d", &rows, &columns);
	int temp = 0;
	for (int i = 1; i <= rows; i++) {
		printf("%d", i);
		temp = i;
		for (int j = 1; j <= columns; j++) {
			if (j <= columns - i) {
				printf("%d", i + j);
				temp = i + j;
			}
			else {
				int k = min(i - 1, columns - 1);
				while (j < columns) {
				
					printf("%d", --temp);
					
					j++;
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}