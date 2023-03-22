#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int maxElements(int arr[], int length) {
	int max = arr[0];
	for(int i = 1; i < length; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

void printIndex(int arr[], int length, int max) {
//	int max = maxElements;
	for(int i = 0; i < length; i++) {
		if (arr[i] == max) {
			printf("%d ", i);
		}
	}
}

//lam lai lan 1
int main(){
	
	
	
		int length;
		scanf("%d", &length);
		int arr[length];
		for(int i = 0; i < length; i++) {
			scanf("%d", &arr[i]);
		}
		
		for(int i = length - 1; i >= 0; i--){
			printf("%d ", arr[i]);
		}
		
	
	
	return 0;
}