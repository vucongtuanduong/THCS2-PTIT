#include<stdio.h>
#include<math.h>
#include<stdbool.h>



bool check(int n) {
	int sumDigit = 0;
	int x = n;
	for(int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			sumDigit += i;
			sumDigit += (n / i);
		}
	}
	sumDigit -= x;
	int sqrtN = sqrt(n);
	if (sqrtN * sqrtN == n) {
		sumDigit -= sqrtN;
	}
	
	if (sumDigit == x) {
		return true;
	} else {
		return false;
	}
}

int main(){
	
	int a, b;
	scanf("%d%d", &a, &b);
	
	if (a > b) {
		for(int i = b; i <= a; i++) {
			if (check(i)) {
				printf("%d ", i);
			}
		}
	} else {
		for(int i = a; i <= b; i++) {
			if (check(i)) {
				printf("%d ", i);
			}
		}
	}
	
	return 0;
}