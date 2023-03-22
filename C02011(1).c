#include <stdio.h>

/*
4 4

1234; i = 1; tang 3 lan

2341 ; i = 2; tang 2 lan

3421 ; i  = 3; tang 1 lan

4321 ; i = 4; tang 0 lan

3 5

12345 ; i = 1; tang 4 lan

23451 ; i = 2; tang 3 lan

34521 ; i  = 3 ; tang 2 lan

6 4

1234

2341

3421

4321

5321

6321





*/


int min(int a, int b) {
	return (a > b) ? b : a;
}

// lam lai lan 1
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