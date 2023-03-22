#include<stdio.h>
#include<stdbool.h>
#include<math.h>

#define ll long long



bool check(ll n) {
	int countEven = 0;
	int countOdd = 0;
	while (n > 0) {
		int digit = n % 10;
		if (digit % 2 == 0) {
			countEven++;
		} else {
			countOdd++;
		}
		n /= 10;
	}
	if (countEven < countOdd) {
		return true;
	} else {
		return false;
	}
}

int main(){
	
	int num_test;
	scanf("%d", &num_test);
	
	bool res[num_test];
	
	for(int i = 0;i < num_test; i++) {
		ll input_number;
		scanf("%lld", &input_number);
		res[i] = check(input_number);
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