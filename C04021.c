#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_SIZE 30





int main(){
	
	int n;
	scanf("%d", &n);
	int a[n];
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
		
	int num;
	scanf("%d", &num);
	int index = n -  num;
	
	for(int i = index; i < n; i++) {
		printf("%d ", a[i]);
	}
	
	for(int i = 0; i < index; i++) {
		printf("%d ", a[i]);
	}
	
	
	return 0;
}
	

	
	
	
