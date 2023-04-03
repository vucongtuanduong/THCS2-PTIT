#include<stdio.h>

int min(int a, int b) {
	if(a <= b) return a;
	else{
		return b;
	}
}

int main(){
	
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	
	int minOfThree = min(a, min(b, c));
	
	printf("%d", minOfThree);
	
	return 0;
}