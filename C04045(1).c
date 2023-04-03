#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_SIZE 100000


// lam lai lan 1
int main() {
	int test;
	scanf("%d\n", &test);
	
	
	while (test--) {
		char s[MAX_SIZE]; //array of input numbers
		gets(s);
		
		int n = strlen(s);
		int count = 0;
		int countEven = 0;
		int countOdd = 0;
		for (int i = 0; i <= n; i++) {
			if (s[i] == ' ' || s[i] == '\0') {
				count++;
				if ((s[i - 1] - 48) % 2 == 0) {
					countEven++;
				} else {
					countOdd++;
				}
			}
		}
		if (count % 2 == 0) {
			if (countEven > countOdd) {
				printf("YES\n");
			} else {
				printf("NO\n");
			}
		} else {
			if (countOdd > countEven) {
				printf("YES\n");
			} else {
				printf("NO\n");
			}
		}
	}
	return 0;
}