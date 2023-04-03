#include<stdio.h>
#include<math.h>
#include <stdbool.h> //update bool data type

int sum(int a, int b) {
	int number = abs(b - a) + 1;
	int res = (a + b) * number /2;
	return res;
}


int main(){
	
	int a, b;
	scanf("%d%d", &a, &b);
	long long res = sum(a, b);
	
	printf("%d", res);
	
	return 0;
}