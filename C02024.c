#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int min(int a, int b) {
	return (a > b) ? b : a;
}

/*
4 4

ABCD; 1234; i = 1; tang 3 lan
BCDA; 2341; i  = 2; tang 2 lan

CDBA ; 3421; i =3; tang 1 lan

DCBA;4321; i =4; tang 0 lan

3 5

ABCDE

BCDEA

CDEBA

5 3

ABC

BCA

CBA

CBA

CBA


*/
int main() {
	
	int rows, columns;
	scanf("%d %d", &rows, &columns);
	
	for (int i = 1; i <= rows; i++) {
		int init = min(i, columns);
		for (int j = 1; j <= columns; j++) {
			if (j <= columns - i + 1) {
				printf("%c", 64 + init + j - 1);
			} else {
				
				if (columns < i) {
					printf("%c", 64 + init--);
				} else {
					printf("%c", --init + 64);
				}
				
			}
		}
		printf("\n");
	}
	
	return 0;
}