#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int min(int a, int b) {
	return (a > b) ? b : a;
}

/*
4 4

1 2 3 4 : i = 1; tang 3 lan
2 3 4 4 ; i = 2; tang  2 lan
3 4 4 4; i =3; tang 1 lan
4 4 4 4 ' i =4; tang 0 lan


*/
int main() {
	
	int rows, columns;
	scanf("%d %d", &rows, &columns);
	
	for (int i = 1; i <= rows; i++) {
		int init = min(i, columns);
		for (int j = 1; j <= columns; j++) {
			if (j <= columns - i) {
				printf("%c", (63 + init++));
			} else {
				
				printf("%c", 63 + init);
				
			}
		}
		printf("\n");
	}
	
	return 0;
}