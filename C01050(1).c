#include <stdio.h>
#include<math.h>




void printRectangle(int length, int width) {
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < length; j++) {
			if (i == 0 || j == 0 || i == width - 1 || j == length - 1) {
				printf("*");
			} else {
				printf(" ");
			}
			
		}
		printf("\n");
	}
}

int main()
{
    int length, width;
    scanf("%d %d", &length, &width);
    printRectangle(length, width);
    return 0;
}