#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_SIZE 30





int main(){
	
	int n;
	scanf("%d", &n);
	int a[n];
	int max = 0,secondMax = 0;
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		
	}
	
	for(int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
		
	}
	for (int i = 0; i < n; i++){
		if (a[i] > secondMax && a[i] != max) {
			secondMax = a[i];
		}
	}
	
	printf("%d %d", max, secondMax);	
	
	
	return 0;
}
	

	
	
	
