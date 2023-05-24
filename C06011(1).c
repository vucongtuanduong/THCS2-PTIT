#include <stdio.h>
#include <string.h>
int sum_num(char num[]) {
	int res = 0;
	for (int i = 0; i < strlen(num); i++) {
		res += (num[i] - '0');
	}
	return res;
}
int check8(char num[]) {
	int n = strlen(num);
	if (num[0] != '8' && num[n - 1] != '8') {
		return 0;
	} else {
		return 1;
	}
}
int check_number(char num[]) {
	if (check8(num) == 1 && (sum_num(num) % 10 == 0)) {
		return 1;
	} else {
		return 0;
	}
}
void check(char num[]) {
	if (check_number(num)) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		char num[501];
		scanf("%s", num);
		check(num);
	}
}