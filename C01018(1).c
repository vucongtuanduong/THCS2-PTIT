#include<stdio.h>
#include<math.h>
#include<stdbool.h>
// lam lai lan 1

bool isSquareNumber(int n) {
	int sqrtN = sqrt(n);
	if (sqrtN * sqrtN == n) {
		return true;
	} else {
		return false;
	}
}

int main(){
	
	int test_case;
	scanf("%d", &test_case);
	
	while(test_case -- > 0) {
		int inputNumber;
		scanf("%d", &inputNumber);
		if (isSquareNumber(inputNumber)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	return 0;
}