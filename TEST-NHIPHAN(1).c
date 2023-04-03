#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 10000

// lam lai lan 1
int main(){
	
	int a;
	scanf("%d", &a);
	int res[250];
	if (a == 0) {
		printf("0");
	} else {
		int count = 0;
		while ( a > 0){
			if (a % 2 == 0) {
				res[count++] = 0;
			} else {
				res[count++] = 1;
			}
			a /= 2;
			
		}
		for (int i = count - 1; i >= 0; i--) {
			printf("%d", res[i]);
		} 
	}
	
	
	return 0;
}