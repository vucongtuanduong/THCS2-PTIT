#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int max(int a, int b) {
	return (a > b) ? a : b;
}

/*
5 5

eeeee ; 55555; i = 1: giam 0 lan

edddd ; 54444; i = 2: giam 1 lan

edccc; 54333; i = 3; giam 2 lan 

edcbb ; 54322;
 
edcba ; 54321;

4 6

ffffff

feeeee

fedddd

fedccc

6 4

ffff

feee

fedd

fedc

fedc

fedc




*/
int main() {
	
	int rows, columns;
	scanf("%d %d", &rows, &columns);
	
	for (int i = 1; i <= rows; i++) {
		int init = max(rows, columns);
		for (int j = 1; j <= columns; j++) {
			if (j < i) {
				printf("%c", 96 + init--);
			} else {
				printf("%c", 96 + init);
			}
		}
		printf("\n");
	}
	
	return 0;
}