#include<stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int n) {
	if (n < 2) {
		return false;
	} else {
		for(int i = 2 ; i <= sqrt(n); i++) {
			if (n % i == 0) {
				return false;
			}
		}
	}
	return true;
}

void print(int n) {
	for(int i = 2; i <= n / 2; i++) {
		if (isPrime(i) && isPrime(n - i)) {
			printf("%d %d ", i, n - i);
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int arr[100005];
	int x, y;
	for(int i = 0; i <= 100005; i++) {
		arr[i] = 0;
	}
	for(int i = 0; i < n - 1; i++) {
		scanf("%d %d" ,&x, &y);
		
		arr[x]++;
		arr[y]++;
	}
	for(int i = 0; i <= 100000; i++) {
		if (arr[i] == n - 1) {
			printf("Yes");
			return 0;
		}
	}
	printf("No");
	
//	return 0;
}