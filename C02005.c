#include<stdio.h>

int main(){
	int rows, columns;
	scanf("%d %d", &rows, &columns);
	
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < i; j++) {
			printf("~");
			
			
		}
		for(int k = 0; k < columns; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}