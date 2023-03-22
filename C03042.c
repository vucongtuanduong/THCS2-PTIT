#include<stdio.h>
#include<math.h>
#include<stdbool.h>

#define ll long long

bool check(int n) {
	int x = -1;
	while (n > 0) {
		
		int digit = n % 10;
		
		if (digit <= x) {
			return false;
		} 
		x = digit;
		n /= 10;
		
	}
	return true;
		
}

int main(){


	int testCase;
	scanf("%d", &testCase);
	
	while (testCase--) {
		int a, b;
		scanf("%d %d", &a, &b);
		int count = 0;
		for(int i = a; i <= b; i++) {
			if (check(i)) {
//				printf("%d ", i);
				count++;
			}
		}
		printf("%d\n", count);
	}
	
	return 0;
}
