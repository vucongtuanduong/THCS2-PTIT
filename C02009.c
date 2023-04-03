#include<stdio.h>

int main(){
	int height; 
	scanf("%d", &height);
	
	for(int i = 0; i < height; i++) {
		for(int j = i; j < height - 1; j++) {
			printf("~");
		}
		
		for(int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}