
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

//lam lai lan 1
bool isPrime(int n) {
	if (n < 2) {
		return false;
	} else {
		for(int i = 2; i < sqrt(n); i++){
			if (n % i == 0) {
				return false;
			}
		}
	}
	return true;
}

int main(){
	
	int test_case;
	scanf("%d", &test_case);
	
	while(test_case --) {
		int input;
		scanf("%d", &input);
		if (isPrime(input)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	return 0;
}