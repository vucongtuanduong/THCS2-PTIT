#include<stdio.h>
#include<stdbool.h>

#define ll long long

bool check(ll n) {
	int digit = n % 10;
	while(n > 0) {
		n /= 10;
		if (digit < (n % 10)) {
			return false;
		}
		digit = n % 10;
	}
	return true;
}

int main(){
	
	int num_test;
	scanf("%d", &num_test);
	
	bool res[num_test];
	
	for(int i = 0;i < num_test; i++) {
		ll input_number;
		scanf("%lld", &input_number);
		if (check(input_number)) {
			res[i] = true;
		} else {
			res[i] = false;
		}
	}
	
	for(int i = 0;i < num_test; i++) {
		if (res[i] == true) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	
	return 0;
}