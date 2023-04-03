#include<stdio.h>
#include<stdbool.h>
#include<math.h>

#define ll long long

//chua giai xong


bool check(int n) {
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
	
	while (num_test --) {
		int n;
		scanf("%d", &n);
		int left = pow(10, n - 1);
		int right = pow(10, n);
		for(int i = left; i < right; i++) {
			if (check(i)) {
				printf("%d ", i);
			}
		}
		printf("\n");
	}
	
	
	
	
	
	
	return 0;
}