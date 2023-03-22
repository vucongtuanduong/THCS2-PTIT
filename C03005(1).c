#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	
	return a;
}

bool coPrime(int a, int b) {
	return gcd(a, b) == 1;
}

//lam lai lan 1
int main(){
	
	int a, b;
	scanf("%d %d", &a, &b);
	
	for (int i = a; i <= b; i++) {
		for(int j = i + 1; j <= b; j++){
			if (coPrime(i,j)) {
				printf("(%d,%d)\n", i, j);
			}
		}
	}
	
	return 0;
}