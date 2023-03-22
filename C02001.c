#include<stdio.h>
#include<stdbool.h>

#define ll long long



int main(){
	
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}