#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool check(int arr[], int length) {
	for(int i = 0; i <= length / 2; i++) {
		if (arr[i] != arr[length - i -1]) {
			return false;
		}
	}
	return true;
}

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
		
		if (check(arr, length)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
		
	}
	
	return 0;
}