#include <stdio.h>
#include<math.h>




void printSquareNumber(int a, int b) {
	int sqrtA = sqrt(a);
	int sqrtB = sqrt(b);
	if (sqrtA * sqrtA != a) {
		sqrtA ++;
	}
	int res[100000];
	int count = 0;
	
	for(int i = sqrtA; i <= sqrtB; i++) {
		res[count] = i * i;
		count++;
	}
	
	printf("%d\n", count);
	
	for(int i = 0; i < count; i++) {
		printf("%d\n", res[i]);
	}
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printSquareNumber(a, b);
    return 0;
}