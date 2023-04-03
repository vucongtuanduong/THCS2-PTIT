#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 10000



int main() {
	
	int n;
	scanf("%d", &n);
	int res[100];
	
	if (n == 0){
		printf("0");
		return 0;
	}
	int count = 0;
	while (n > 0) {
		if (n % 2 == 0) {
			res[count++] = 0;
		} else {
			res[count++] = 1;
		}
		n /= 2;
	}
	
	for (int i = count - 1; i >= 0; i--){
		printf("%d", res[i]);
	}
	return 0;
}
