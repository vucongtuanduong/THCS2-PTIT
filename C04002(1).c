#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isPrime(int n) {
	if (n < 2) {
		return false;
	} else {
		for(int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				return false;
			}
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
		
		for(int i = 0;i < length; i++) {
			if (isPrime(arr[i])) {
				printf("%d ", arr[i]);
			}
		}
		printf("\n");
	}
	
	return 0;
}