#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


int min(int a, int b) {
	return a > b ? b : a;
}
/*
input: 4 4
output: 
4321: i = 1, giam 3 lan
3212: i = 2; giam 2 lan
2123: i  = 3; giam 1 lan
1234: i = 4; giam 0 lan


*/


/*
input : 4 6
output:
654321: i = 1 ; 6 ; giam 5 lan
543212: i = 2 ; 5 ; giam 4 lan
432123 : i = 3; 4; giam 3 lan
321234 ; i = 4; 3; giam 2 lan




*/

int main() {
	int rows, columns;
	scanf("%d %d", &rows, &columns);
	
	if (rows >= columns) {
			for (int i = rows; i >= 1; i--) {
			int init = i; 
			for (int j = 1; j <= columns; j++) {
				if (j < i) {
					printf("%d", init--);
				} else {
					printf("%d", init++);
				}
			}
			printf("\n");
		}
	} else {
		for (int i = 1; i <= rows; i++) {
			int init = columns - i + 1;
			for (int j = 1; j <= columns; j++) {
				if (j <= columns - i) {
					printf("%d", init--); 
				} else {
					printf("%d", init++);
				}
			}
			printf("\n");
		}
	}
	
    
	return 0;
}
