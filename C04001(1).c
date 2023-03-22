#include<stdio.h>

//lam lai lan 1
int main(){
	int testCase;
	scanf("%d", &testCase);
	
	while (testCase--) {
		int length;
		scanf("%d", &length);
		int arr[length];
		for(int i = 0; i < length; i++) {
			scanf("%d", &arr[i]);
		}
		
		for(int i = 0;i < length; i++) {
			if (arr[i] % 2 == 0) {
				printf("%d ", arr[i]);
			}
		}
		printf("\n");
	}
	
	return 0;
}