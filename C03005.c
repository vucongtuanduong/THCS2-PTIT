#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

bool coprime(int a, int b) {
	return gcd(a, b) == 1;
}

void print(int a, int b) {
	for(int i = a; i <= b; i++){
		for(int j = i + 1; j <= b; j++){
			if (coprime(i,j)) {
				printf("(%d,%d)\n", i, j);
			}
		}
	}
}

int main(){
	
	int a, b;
	scanf("%d %d", &a, &b);
	print(a, b);
	return 0;
}