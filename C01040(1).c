#include<stdio.h>
#include<math.h>
#include<stdbool.h>

//lam lai lan 1

bool check(int n) {
	int res = 0;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			res += i;
			res += n / i;
		}
	}
	res -= n;
	int sqrtN = sqrt(n);
	if (sqrtN * sqrtN == n) {
		res -= sqrtN;
	}
	if (res != n) {
		return false;
	} else {
		return true;
	}
}

int main(){
	int inputNumber;
	scanf("%d", &inputNumber);
	
	if (check(inputNumber)) {
		printf("1");
	} else {
		printf("0");
	}
	
	return 0;
}