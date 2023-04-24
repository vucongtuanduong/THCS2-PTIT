#include <stdio.h>

int main () {
	
	int width, length;
	scanf("%d %d", &width, &length);
	if (width <= 0 || length <= 0) {
		printf("0");
	} else {
		int p = (width + length) * 2;
		int s = width * length;
		printf("%d %d", p, s);
	}
		
}