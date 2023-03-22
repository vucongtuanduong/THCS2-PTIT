#include<stdio.h>
#include<stdbool.h>

#define ll long long

bool checkEvenDigit(ll n) {
	int digit = 0;
	while (n > 0) {
		digit = n % 10;
		if (digit % 2 != 0) {
			return false;
		}
		n /= 10;
	}
	return true;
}

bool check(ll n) {
	if (n % 2 == 0 && checkEvenDigit(n) == true) {
		return true;
	} else {
		return false;
	}
}


int main(){
	
	int num_tests;
	scanf("%d", &num_tests);
	
	bool res[num_tests];
	
	for(int i = 0; i < num_tests; i++) {
		ll input_number;
		scanf("%lld", &input_number);
		res[i] = check(input_number);
	}
	
	for(int i = 0; i < num_tests; i++) {
		if (res[i] == true) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	return 0;
}