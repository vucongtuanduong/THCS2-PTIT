#include<stdio.h>

void reverseArray(int arr[], int length) {
	for(int i = length - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
}

int main(){
	
	int length;
	scanf("%d", &length);
	
	int arr[length];
	
	for(int i = 0; i < length; i++) {
		scanf("%d", &arr[i]);
	}
	
	reverseArray(arr, length);
	return 0;
}