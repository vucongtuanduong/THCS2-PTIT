#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


int product(int n) {
	int res = 1;
	bool flag;
	for (int i = 2; i <= sqrt(n); i++) {
		flag = false;
		if (n % i == 0 && flag == false) {
			res *= i;
			flag = true;
		}
		while (n % i == 0) {
			n /= i;
		}
	}
	if (n != 1) {
		res *= n;
	}
	return res;
}

void print(int n) {
	int res = product(n);
	printf("%d\n", res);
}

int main(){
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		scanf("%d", &n);
		print(n);
	}
	return 0;
}