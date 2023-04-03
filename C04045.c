#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
	int test;
	scanf("%d\n", &test);
	
	while (test--) {
		char s[10000];
		gets(s);
		int length = strlen(s);
		int count = 0;
		int countEven = 0;
		int countOdd = 0;
		
		for (int i = 0; i <= length; i++) {
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
		}
		
		if (count % 2 == 1) {
			if (countOdd > countEven) {
				printf("YES\n");
			} else {
				printf("NO\n");
			}
		}
	}
	return 0;
}
