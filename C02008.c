#include<stdio.h>

int main(){
	int height; 
	scanf("%d", &height);
	
	for(int i = 0; i < height; i++) {
		if (i == 0 || i == height - 1) {
			for(int j = 0; j <= i; j++) {
				printf("*");
			}
		} else {
			printf("*");
			for(int j = 0; j <= i - 2; j++) {
				printf(".");
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}