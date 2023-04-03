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

int main(){
	
	int length;
	scanf("%d", &length);
	
	int arr[length];
	for(int i = 0; i < length; i++) {
		scanf("%d", &arr[i]);
	}
	int res[length];
	int count = 0;
	
	for(int i = 0; i < length; i++) {
		if (isPrime(arr[i])) {
			
			res[count] = arr[i];
			count++;
		}
	}
	
	printf("%d ", count);
	
	for(int i = 0; i < count; i++) {
		printf("%d ", res[i]);
	}
	return 0;
}
