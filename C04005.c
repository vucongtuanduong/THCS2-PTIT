#include<stdio.h>
#include<stdbool.h>
#include<math.h>

#define ll long long
#define MAX 1000


bool isPrime(ll n) {
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

bool check(int arr[MAX], int elements) {
	for(int i = 0;i <= elements/2; i++) {
			if (arr[i] != arr[elements - i -1]) {
				return false;
			}
			
		}
	return true;
}


int main(){
	
	int num_test;
	scanf("%d", &num_test);
	
	while (num_test --) {
		int elements;
		scanf("%d", &elements);
		int arr[elements];
		
		for(int i = 0; i < elements; i++) {
			scanf("%d", &arr[i]);
		}
		int max = arr[0];
		
		for(int i = 0;i < elements; i++) {
			if (arr[i] > max) {
				max = arr[i];
				
				
			}
			
		}
		printf("%d\n", max);
		for(int i = 0; i < elements; i++) {
			if (arr[i] == max) {
				printf("%d ", i);
			}
		}
		printf("\n");
		
	}
	
	
	
	return 0;
}