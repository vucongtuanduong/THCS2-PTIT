#include<stdio.h>
#include<math.h>
#include <stdbool.h> //update bool data type




int main(){
	
	int input_number;
	scanf("%d", &input_number);
	
	int countOdd = 0;
	int countEven = 0;
	
	while (input_number > 0) {
		if ((input_number % 10 ) % 2 == 0 ) {
			countEven++;
		} else {
			countOdd++;
		}
		input_number /= 10;
	}

	printf("%d %d", countOdd, countEven);

	return 0;
}