#include<stdio.h>
#include<math.h>
#include<stdbool.h>

#define ll long long

int sumDigit(int a) {
	int res = 0;
	while (a > 0) {
		int digit = a % 10;
		res += digit;
		a /= 10;
	}
	return res;
} 

void rearrange(int a, int b) {
	int sumA = sumDigit(a);
	int sumB = sumDigit(b);
	if (sumA > sumB) {
		int temp = a;
		a = b;
		b = temp;
	}
	printf("%d %d", a, b);
}




int main(){


	int a, b;
	scanf("%d %d", &a, &b);
	
	rearrange(a, b);
	
	return 0;
}