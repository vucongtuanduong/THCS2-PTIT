#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isFibo(int n) {
	int arr[30];
	arr[0] = 0;
	arr[1] = 1;
	for(int i = 2; i < 30; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	
	for(int i = 0; i < 30; i++) {
		if (arr[i] == n) {
			return true;
		}
	}
	return false;
}



//lam lai lan 1
int main(){
	
	int n;
	scanf("%d", &n);
	if (isFibo(n)) {
		printf("1");
	} else {
		printf("0");
	}
	
	return 0;
}