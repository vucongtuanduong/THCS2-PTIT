#include<stdio.h>
#include<stdbool.h>

#define ll long long

int sumDigit(int n) {
	int res = 0;
	while (n > 0) {
		res += (n % 10);
		n /= 10;
	}
	return res;
}

bool check(int n) {
	int res = sumDigit(n);
	if (res % 10 == 0) {
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
		int input_number;
		scanf("%d", &input_number);
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