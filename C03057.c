#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long swapMin(char num[]) {
	int length = strlen(num);
	long long res = 0;
	for (int i = 0; i < length; i++) {
		if (num[i] == '6') {
			res = res * 10 + 5;
		} else {
			res = res * 10 + num[i] - 48;
		}
	}
	return res;
}

long long swapMax(char num[]) {
	int length = strlen(num);
	long long res = 0;
	for (int i = 0; i < length; i++) {
		if (num[i] == '5') {
			res = res * 10 + 6;
		} else {
			res = res * 10 + num[i] - 48;
		}
	}
	return res;
}

int main(){
	int test;
	scanf("%d\n", &test);
	
	char s1[20], s2[20];
	while (test--) {
		scanf("%s %s", s1, s2);
		printf("%lld %lld\n", swapMin(s1) + swapMin(s2), swapMax(s1) + swapMax(s2));
		
	}
	
	return 0;
}
