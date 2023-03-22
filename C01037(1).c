#include<stdio.h>
#include<math.h>

//lam lai lan 1
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int numberInRange = abs(b - a) + 1;
	long long sum = (a + b) * numberInRange / 2;
	printf("%lld", sum);
	
	return 0;
}