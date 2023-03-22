#include<stdio.h>
#include<stdbool.h>
#include<math.h>

#define ll long long

//so co 3 uoc so la so chinh phuong co can bac hai la so nguyen to

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

bool check(ll n) {
	int sqrtN = sqrt(n);
	
	if (sqrtN * sqrtN == n && isPrime(sqrtN)) {
		return true;
	} else {
		return false;
	}
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
		for(int i = 0;i < elements; i++) {
			if (arr[i] % 2 == 0) {
				printf("%d ", arr[i]);
			}
			
		}
		printf("\n");
	}
	
	
	
	return 0;
}