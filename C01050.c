#include<stdio.h>


int main(){
	int width, length;
	scanf("%d %d", &width, &length);
	
	for(int i = 0; i < length; i++) {
		if (i == 0 || i == length - 1) {
			for(int j = 0; j < width; j++) {
				printf("*");
			}
		} else {
			for(int j = 0; j < width; j++) {
				if (j == 0 || j == width - 1) {
					printf("*");
				} else {
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}