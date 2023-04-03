#include<stdio.h>

int main(){
	int rows, columns;
	scanf("%d %d", &rows, &columns);
	
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < i; j++) {
			printf("~");
			
			
		}
		for(int k = 0; k < columns; k++) {
			if (i == 0 || i == rows - 1 || k == 0 || k == columns - 1) {
				printf("*");
			} else {
				printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}