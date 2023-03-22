#include<stdio.h>

int main(){
	
	int input_days ;
	scanf("%d", &input_days);
	
	int years = input_days / 365;
	int months = (input_days % 365) / 7;
	int days = ((input_days % 365) % 7);
	
	printf("%d %d %d", years, months, days);
	
	return 0;
}