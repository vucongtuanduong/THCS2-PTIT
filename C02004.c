#include<stdio.h>

int main(){
	int side;
	scanf("%d", &side);
	
	
	for(int i = 0; i < side; i++) {
		for(int j = side - i - 2; j >= 0; j--) {
//			for(int x = 0; x < j; x++) {
//				printf("~");
//			}
//			printf("\n");
			printf("~");
		}
		
		for(int k = 0; k < side; k++) {
			if (i == 0 || i == side - 1 || k == 0 || k == side - 1) {
				printf("*");
			} else {
				printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}