#include <stdio.h>



/*



 




*/
//lam lai lan 1
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