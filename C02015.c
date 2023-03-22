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
	int n;
	scanf("%d", &n);
	int max = 1 + (n - 1) * 2;
	for (int i = 1; i <= max; i += 2) {
		for (int j = 1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	
	return 0;
}
