#include<stdio.h>
#include <stdbool.h>
#include<math.h>

int gcd1(unsigned int a, unsigned int b) {
	
	while (a != b) {
		if (a > b) {
			a = a - b;
		} else {
			b = b - a;
		}
	}
	return a;
}

int gcd(unsigned int a, unsigned int b) { //using while loop
	while (b != 0) {
		unsigned int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int gcd2(unsigned int a, unsigned int b) { //using recursion
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main(){
	
	int num_tests;
	scanf("%d", &num_tests);
	
	int res[num_tests];
	
	for(int i = 0;i < num_tests; i++) {
		unsigned int a, b;
		scanf("%u%u", &a, &b);
		res[i] = gcd(a,b);
	}
	
	for(int i = 0;i < num_tests; i++) {
		printf("%u\n", res[i]);
		
	}
	
	
	return 0;
}