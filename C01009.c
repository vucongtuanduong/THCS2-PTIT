#include<stdio.h>

int main(){
	
	int c_degree;
	scanf("%d", &c_degree);
	
	float f_degree = (c_degree * 9.0 / 5) + 32;
	
	printf("%.2f", f_degree);
	
	
	return 0;
}