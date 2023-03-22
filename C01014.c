#include<stdio.h>

int main(){
	
	//y = ax + b;
	
	float a , b;
	scanf("%f", &a);
	scanf("%f", &b);
	
	if (a == 0) {
		if (b == 0) {
			printf("Vo so nghiem");
		} else {
			printf("Vo nghiem");
		}
	} else {
		float res = (float)-b / a;
		
		printf("%.2f", res);
	}
	
	return 0;
}