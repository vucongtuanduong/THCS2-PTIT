#include <stdio.h>
#include <math.h>
#include <stdbool.h>

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

bool isFibo(int n) {
	int arr[31];
	arr[0] = 0;
	arr[1] = 1;
	for(int i = 2; i <= 30; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for(int i = 0; i < 30; i++) {
		if (n == arr[i]) {
			return true;
		}
	}
	return false;
}

bool check(int n) {
	if (isPrime(n) == false) {
		return false;
	} else {
		int res = 0;
		while (n > 0) {
			res += (n % 10);
			n /= 10;
		}
		if (isFibo(res)) {
			return true;
		} else {
			return false;
		}
	}
}

int main ()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b) {
    	for(int i = b; i <= a; i++) {
    	if (check(i)) {
    		printf("%d ", i);
		} 
	}
	}
    for(int i = a; i <= b; i++) {
    	if (check(i)) {
    		printf("%d ", i);
		} 
	}
    return 0;
}