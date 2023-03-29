#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_NUMBER_DIGITS 20


long long swap_min(char number[MAX_NUMBER_DIGITS]) {
	int length = strlen(number);
	long long res = 0;
	for (int i = 0; i < length; i++) {
		if (number[i] == '6') {
			res = res * 10 + 5; 
		} else {
			res = res * 10 + number[i] - '0';
		}
	}
	return res;
}

long long swap_max(char number[MAX_NUMBER_DIGITS]) {
	int length = strlen(number);
	long long res = 0;
	for (int i = 0; i < length; i++) {
		if (number[i] == '5') {
			res = res * 10 + 6;
		} else {
			res = res * 10 + number[i] - '0';
		}
	}
	return res;
}
// lam lai lan 2
int main() {
	int test;
	scanf("%d\n", &test);
	while (test--) {
		char s1[MAX_NUMBER_DIGITS], s2[MAX_NUMBER_DIGITS];
		scanf("%s %s", s1, s2);
		printf("%lld %lld\n", swap_min(s1) + swap_min(s2), swap_max(s1) + swap_max(s2));
		
	}
	return 0;
}