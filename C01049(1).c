#include<stdio.h>
#include<math.h>
#include<stdbool.h>

//lam lai lan 1



int main(){
	
	int testCase;
	scanf("%d", &testCase);
	
	while(testCase--) {
		int input;
		scanf("%d", &input);
		int countOdd = 0;
		int countEven = 0;
		while (input > 0) {
			int digit = input % 10;
			if (digit % 2 == 0) {
				countEven++;
			} else {
				countOdd++;
			}
			input /= 10;
		}
		printf("%d %d\n", countOdd, countEven);
	}
	return 0;
}